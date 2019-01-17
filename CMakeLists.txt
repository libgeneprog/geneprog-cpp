cmake_minimum_required(VERSION 3.9)
project(geneprog-cpp VERSION 0.0.1 DESCRIPTION "Genetic programming library for C++")
add_library(geneprog-cpp SHARED
	src/cgpgene.cpp
	src/bstgene.cpp
)

# ADD LIBGENEPROG TO PROJECT:
#find_library(LIBGENEPROG geneprog)
#target_link_libraries(geneprog-cpp geneprog)
# https://stackoverflow.com/a/44489201
find_package(PkgConfig REQUIRED)
pkg_search_module(PKG_GENEPROG REQUIRED geneprog)
include_directories(${PKG_GENEPROG_INCLUDE_DIRS})
target_link_libraries (geneprog-cpp ${PKG_GENEPROG_LDFLAGS})

set_target_properties(geneprog-cpp PROPERTIES VERSION ${PROJECT_VERSION})
set_target_properties(geneprog-cpp PROPERTIES SOVERSION 0)

# We don't have a *single* header. We have multiple
file(GLOB_RECURSE _HEADERS "include/*.hpp")

# Set up the pkg-config file:
# configure_file(geneprog.pc.in geneprog.pc @ONLY)

target_include_directories(geneprog-cpp PRIVATE include)

include(GNUInstallDirs)
install(TARGETS geneprog-cpp
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
#	PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/geneprog-cpp)
install(FILES ${_HEADERS} DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/geneprog-cpp)

#Install the pkg-config file
#install(FILES ${CMAKE_BINARY_DIR}/geneprog-cpp.pc
#    DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/pkgconfig)
