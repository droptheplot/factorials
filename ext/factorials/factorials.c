#include <ruby.h>
#include <math.h>

VALUE factorials_num_factorial(VALUE num)
{
  long value = NUM2INT(num), result = 1, i;

  for(i = 1; i <= value; i++) {
    result = result * i;
  }

  return INT2NUM(result);
}

VALUE factorials_num_double_factorial(VALUE num)
{
  long value = NUM2INT(num), result = 1;

  if(value % 2 == 0) {
    return INT2NUM(
      pow(2, value / 2) * NUM2INT(
        factorials_num_factorial(INT2NUM(value / 2))
      )
    );
  } else {
    return INT2NUM(
      NUM2INT(factorials_num_factorial(num)) / (
        pow(2, (value - 1) / 2) * NUM2INT(
          factorials_num_factorial(INT2NUM((value - 1) / 2))
        )
      )
    );
  }
}

void Init_factorials(void)
{
  rb_cNumeric = rb_define_class("Numeric", rb_cObject);
  rb_cInteger = rb_define_class("Integer", rb_cNumeric);
  rb_cFixnum = rb_define_class("Fixnum", rb_cInteger);

  rb_define_method(rb_cFixnum, "factorial", factorials_num_factorial, 0);
  rb_define_method(rb_cFixnum, "double_factorial", factorials_num_double_factorial, 0);
}
