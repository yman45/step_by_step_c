project('yman_tooling', 'c',
  version : '0.1',
  default_options : ['warning_level=3'])

yman_strtool = static_library('yman_strtool', 'yman_strtool.c')
strtool_dep = declare_dependency(link_with : yman_strtool)
test_deps = [dependency('check'), strtool_dep]

strtool_test_exec = executable('test_yman_strtool', 'tests/test_yman_strtool.c', dependencies : test_deps)
test('test_yman_strtool', strtool_test_exec)
