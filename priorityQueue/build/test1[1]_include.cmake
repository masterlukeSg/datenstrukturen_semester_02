if(EXISTS "/Users/lukasbaumeister/zettel0/priorityQueue/build/test1[1]_tests.cmake")
  include("/Users/lukasbaumeister/zettel0/priorityQueue/build/test1[1]_tests.cmake")
else()
  add_test(test1_NOT_BUILT test1_NOT_BUILT)
endif()
