project('scipy_lsap_c', 'cpp', version: '1.4.0')

sources = ['rectangular_lsap.cpp']

inc = include_directories('.')
liblsap = static_library('scipy_lsap_c', 
                    sources,
                    install: false)

liblsap_dep = declare_dependency(include_directories: inc, link_with : liblsap)

executable('scipy_lsap_c',
   ['main_test.cpp'],
   dependencies : [liblsap_dep])
