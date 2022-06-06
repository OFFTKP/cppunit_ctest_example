# cppunit minimal reproducible example w/ CMake and CTest

An easy to understand example showcasing CPPUnit with CMake and CTest.

Instructions:
```
git clone https://github.com/OFFTKP/cppunit_ctest_example
cd cppunit_ctest_example
git clone git://anongit.freedesktop.org/git/libreoffice/cppunit/
cmake -B build
cmake --build build
cd build
ctest
```
(tested on Arch x86_64)

Try changing the asserts in `palindrome_test.cxx` to see what happens when a test fails.
You can also run `ctest --output-on-failure` to get more info instead of logging to a file.
