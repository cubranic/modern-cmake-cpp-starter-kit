# Demo project structure set up for modern CMake and C++

This repo contains a skeleton C++ project set up with following goals in mind:

- modern C++ (C++17, at this time -- I'm not quite ready to jump into C++20)
- unit testing with [GoogleTest] framework
- directory structure of "src", "include", and "test"
- declarative CMake configuration with defaults wherever possible and leaving CMake to figure out everything else

# Use

```
mkdir build
cd build
cmake ..
make
ctest
```

You can also run the `build/test/Tests` binary directly, instead of with `ctest`. This can be use to see more details of a failing test:
```
build$ ./test/Tests 
Running main() from gmock_main.cc
...
[ RUN      ] Calc.Log2
/Users/davor/projects/davor/edcpp/test/test_log2.cc:7: Failure
Expected equality of these values:
  calc_log2(1024)
    Which is: 10
  11
log2 1024 == 10
[  FAILED  ] Calc.Log2 (0 ms)
[ RUN      ] Calc.Ln
[       OK ] Calc.Ln (0 ms)
[----------] 4 tests from Calc (0 ms total)

[----------] Global test environment tear-down
[==========] 4 tests from 1 test suite ran. (1 ms total)
[  PASSED  ] 3 tests.
[  FAILED  ] 1 test, listed below:
[  FAILED  ] Calc.Log2

 1 FAILED TEST
```

# Contributing

Please file an issue if you find any problems with either code or documentation
in this repo, or if you have questions how to use it. PRs welcome!


# Credits

Thanks to Daniel Pfeifer for his excellent [tutorial] "Effective CMake" (C++ Now
2017) that inspired me to apply those principles in my own C++ projects. Any
errors and misapplication of CMake you find on this repo are entirely mine.


# License

Copyright (c) 2020, Davor Cubranic. All rights reserved. You may copy and use
this code under BSD 2-Clause License. See file [LICENSE](LICENSE) for details.


[tutorial]: https://raw.githubusercontent.com/boostcon/cppnow_presentations_2017/master/05-19-2017_friday/effective_cmake__daniel_pfeifer__cppnow_05-19-2017.pdf
