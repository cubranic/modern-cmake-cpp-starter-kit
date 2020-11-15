add_executable(Calc
    main.cc
)
add_subdirectory(ops)

target_include_directories(Calc PUBLIC 
  ${CMAKE_SOURCE_DIR}/include
)
target_link_libraries(Calc PUBLIC CalcOps)
