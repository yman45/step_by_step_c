project('ch1_programming_basics', 'c',
  version : '0.1',
  default_options : ['warning_level=3'])

add_project_arguments('-g3',
                      '-Wconversion',
                      '-Wdouble-promotion',
                      '-Wno-unused-parameter',
                      language: 'c')

yman_strtool = static_library('yman_strtool', '../../tooling/yman_strtool.c')
strtool_dep = declare_dependency(link_with : yman_strtool)
executable('hello_world', 'ex1_hello_world.c')
executable('basic_function_calls', 'ex2_basic_function_calls.c')
executable('cat', 'ex3_cat.c')
executable('egg_figures', 'ex4_egg_figures.c')
executable('escape_seq1', 'ex5_escape_seq1.c')
executable('escape_seq2', 'ex6_escape_seq2.c')
executable('escape_seq3', 'ex7_escape_seq3.c')
executable('function_tracing1', 'ex8_function_tracing1.c')
executable('function_tracing2', 'ex9_function_tracing2.c')
executable('function_tracing3', 'ex10_function_tracing3.c')
executable('receipt2', 'ex12_receipt2.c', dependencies : strtool_dep)
executable('retirement_age', 'ex13_retirement_age.c', dependencies : strtool_dep)
