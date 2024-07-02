project(
  'mlfsr',
  'c',
  default_options: [
    'c_std=c89'
  ]
)

cc = meson.get_compiler('c')

add_project_arguments(cc.get_supported_arguments([
  '-Wno-pointer-to-int-cast'
]), language: 'c')

shared_library(
  'mlfsr',
  'src/mlfsr.c',
  include_directories: include_directories('include/')
)

static_library(
  'mlfsr',
  'src/mlfsr.c',
  include_directories: include_directories('include/')
)
