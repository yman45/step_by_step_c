project('ch2_arrays', 'c',
  version : '0.1',
  default_options : ['warning_level=3'])

add_project_arguments('-g3',
                      '-Wconversion',
                      '-Wdouble-promotion',
                      '-Wno-unused-parameter',
                      language: 'c')

yman_artool = static_library('yman_artool', '../../tooling/yman_artool.c')
artool_dep = declare_dependency(link_with : yman_artool)
yman_strtool = static_library('yman_strtool', '../../tooling/yman_strtool.c')
strtool_dep = declare_dependency(link_with : yman_strtool)
yman_errtool = static_library('yman_errtool', '../../tooling/yman_errtool.c')
errtool_dep = declare_dependency(link_with : yman_errtool)


executable('array_mystery7', 'ex1_array_mystery7.c')
executable('count_short_strings', 'ex2_count_short_strings.c')
executable('find_pairs', 'ex3_find_pairs.c')
executable('max_row', 'ex4_max_row.c')
executable('most_frequent_digit', 'ex5_most_frequent_digit.c')
executable('print_reverse', 'ex6_print_reverse.c')
executable('reverse', 'ex7_reverse.c')
executable('section_attendance', 'ex8_section_attendance.c')
executable('swap', 'ex9_swap.c', dependencies : artool_dep)
executable('swap_all', 'ex10_swap_all.c', dependencies : artool_dep)
executable('switch_pairs', 'ex11_switch_pairs.c')
executable('temperatures', 'ex12_temperatures.c', dependencies: [strtool_dep, errtool_dep])
