project(
    'laocoon',
    'cpp',
    version: '0.0.1-B',
    default_options: [
        'cpp_std=c++17',
        'buildtype=debugoptimized',
    ]
)

sources = [
    'src/laocoon/interceptor.cpp'
]

test_sources = [
    'test/test.cpp'
]

include = include_directories('include')

deps = [
    dependency('threads')
]

laocoon_lib = library(
    'laocoon',
    sources,
    install: true,
    build_by_default: true,
    include_directories: include,
    dependencies: deps
)

executable(
    'laocoon-test',
    test_sources,
    install: false,
    build_by_default: true,
    include_directories: include,
    link_with: laocoon_lib
)