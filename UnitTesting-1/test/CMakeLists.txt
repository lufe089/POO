# Definicion variable del nombre del proyecto
#cmake_minimum_required(VERSION 3.19)
#project(casino_sources)

set(BINARY ${CMAKE_PROJECT_NAME}_test)  # El nombre va a a estar en el CMake principal


# Mejora de los ejectuables para que compile y enlace todos los archivos en una carpeta dada. En ese caso la varible creada se llama TEST_SOURCES
#GLOB_RECURSE will traverse all the subdirectories of the matched directory and match the files.
# setting LIST_DIRECTORIES to true adds directories to result list
#file({GLOB | GLOB_RECURSE} <out-var> [...] [<globbing-expr>...])
file(GLOB_RECURSE TEST_SOURCES LIST_DIRECTORIES false *.h *.cpp *.cc)

# Definicion variable sources para las pruebas
set(SOURCES ${TEST_SOURCES})

# Instrucción que define el ejecutable a partir de las fuentes definidas
add_executable(${BINARY} ${TEST_SOURCES})  # Primer parametro nombre del ejecutable segundo parametro lista de todos los archivos a compilar

#gtest_discover_tests()

#add_test(NAME <name label>
#         COMMAND <command that needs to be executed>
#         WORKING_DIRECTORY <folder where the command needs to be executed>)
#add_test(NAME ${BINARY} COMMAND ${BINARY})

#add_subdirectory(src)

##add_executable(${BINARY} ${SOURCES})

#enable_testing()

#add_executable(all_test hello_test.cpp)

#add_test(NAME ${BINARY} COMMAND ${BINARY})

#add_test(NAME prueba COMMAND ${BINARY}_test )



# VInculo con las fuentes del proyecto. Ojo google test requiere C++11 Que punto del codigo es el que vamos a probar
#target_link_libraries(${BINARY} PUBLIC ${CMAKE_PROJECT_NAME}_lib gtest_main) # El ultimo parametro indica que es google test el que va a correr las pruebas
#target_link_libraries(casino_sources_lib ${BINARY}  gtest) # El ultimo parametro indica que es google test el que va a correr las pruebas

target_link_libraries(${BINARY} ${CMAKE_PROJECT_NAME}_lib gtest_main)

#include(GooleTest)
#gtest_discover_test(hello_test)
#enable_testing()


## Working simple cmake
enable_testing()
#add_executable(test_luisa hello_test.cpp CalculatorTest.cpp)

# First target --> test executable second target src executable , third target google test files
#target_link_libraries(test_luisa myCalculator_lib gtest_main )

include(GoogleTest)
#gtest_discover_tests(test_luisa)
gtest_discover_tests(${BINARY})