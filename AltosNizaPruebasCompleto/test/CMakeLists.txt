set(BINARY ${CMAKE_PROJECT_NAME}_test)  # El nombre va a a estar en el CMake principal

# Mejora de los ejectuables para que compile y enlace todos los archivos en una carpeta dada. En ese caso la varible creada se llama TEST_SOURCES
#GLOB_RECURSE will traverse all the subdirectories of the matched directory and match the files.
# setting LIST_DIRECTORIES to true adds directories to result list
#file({GLOB | GLOB_RECURSE} <out-var> [...] [<globbing-expr>...])
file(GLOB_RECURSE TEST_SOURCES LIST_DIRECTORIES false *.h *.cpp *.cc)

# Definicion variable sources para las pruebas
set(SOURCES ${TEST_SOURCES})

add_executable(${BINARY} ${SOURCES})
#add_executable(casino_full_test hello_test.cpp CasinoTest.cpp DosColoresTest.cpp)

# First target --> test executable second target src executable , third target google test files
#target_link_libraries(test_calculator casino_full_lib gtest_main )
# VInculo con las fuentes del proyecto. Ojo google test requiere C++11 Que punto del codigo es el que vamos a probar
target_link_libraries(${BINARY} ${CMAKE_PROJECT_NAME}_lib gtest_main)

## Working simple cmake
enable_testing()

include(GoogleTest)
gtest_discover_tests(${BINARY})