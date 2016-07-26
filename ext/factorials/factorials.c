#include <ruby.h>
#include <math.h>

static long factorial(long num)
{
  long result = 1, i;

  for(i = 1; i <= num; i++) {
    result = result * i;
  }

  return result;
}

VALUE factorials_num_factorial(VALUE num)
{
  long value = NUM2INT(num);

  return INT2NUM(factorial(value));
}

VALUE factorials_num_double_factorial(VALUE num)
{
  long value = NUM2INT(num), result = 1;

  if(value % 2 == 0) {
    result = pow(2, value / 2) * factorial(value / 2);
  } else {
    result = factorial(value) / (pow(2, (value - 1) / 2) * factorial((value - 1) / 2));
  }

  return INT2NUM(result);
}

void Init_factorials(void)
{
  rb_cNumeric = rb_define_class("Numeric", rb_cObject);
  rb_cInteger = rb_define_class("Integer", rb_cNumeric);
  rb_cFixnum = rb_define_class("Fixnum", rb_cInteger);

  rb_define_method(rb_cFixnum, "factorial", factorials_num_factorial, 0);
  rb_define_method(rb_cFixnum, "double_factorial", factorials_num_double_factorial, 0);
}
