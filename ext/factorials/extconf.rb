require 'mkmf'

have_header('ruby.h') or missing('ruby.h')

create_makefile('factorials')
