# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/users/info/etu-2a/estiennq/R3.04git/C_course_semester3/TP06/cmake-build-debug/_deps/googletest-src"
  "/users/info/etu-2a/estiennq/R3.04git/C_course_semester3/TP06/cmake-build-debug/_deps/googletest-build"
  "/users/info/etu-2a/estiennq/R3.04git/C_course_semester3/TP06/cmake-build-debug/_deps/googletest-subbuild/googletest-populate-prefix"
  "/users/info/etu-2a/estiennq/R3.04git/C_course_semester3/TP06/cmake-build-debug/_deps/googletest-subbuild/googletest-populate-prefix/tmp"
  "/users/info/etu-2a/estiennq/R3.04git/C_course_semester3/TP06/cmake-build-debug/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp"
  "/users/info/etu-2a/estiennq/R3.04git/C_course_semester3/TP06/cmake-build-debug/_deps/googletest-subbuild/googletest-populate-prefix/src"
  "/users/info/etu-2a/estiennq/R3.04git/C_course_semester3/TP06/cmake-build-debug/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/users/info/etu-2a/estiennq/R3.04git/C_course_semester3/TP06/cmake-build-debug/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp/${subDir}")
endforeach()
