if(EXISTS "L:/GIT/POO/AltosNizaPruebasCompleto/cmake-build-debug/test/niza_full_test[1]_tests.cmake")
  include("L:/GIT/POO/AltosNizaPruebasCompleto/cmake-build-debug/test/niza_full_test[1]_tests.cmake")
else()
  add_test(niza_full_test_NOT_BUILT niza_full_test_NOT_BUILT)
endif()
