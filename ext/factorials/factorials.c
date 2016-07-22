#include <ruby.h>

VALUE factorials_num_factorial(VALUE num)
{
  long value = NUM2INT(num), result = 1, i;

  for(i = 1; i <= value; i++) {
    result = result * i;
  }

  return INT2NUM(result);
}

void Init_factorials(void)
{
  rb_cNumeric = rb_define_class("Numeric", rb_cObject);
  rb_cInteger = rb_define_class("Integer", rb_cNumeric);
  rb_cFixnum = rb_define_class("Fixnum", rb_cInteger);

  rb_define_method(rb_cFixnum, "factorial", factorials_num_factorial, 0);
}
