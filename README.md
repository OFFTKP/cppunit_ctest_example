# cppunit minimal reproducible example w/ ctest

An easy to understand example showcasing CPPUnit with CTest.

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

---

Explanation:    
- During ctest, the tests added with `add_test` are run and a `main` function is needed for each test
- A `main` function exists in `test_runner.cxx` which was added to `PalindromeTest`
- During that `main`, registered tests are automatically discovered with `CppUnit::TestFactoryRegistry::getRegistry()`
- The registered tests are run as specified in `palindrome_test.cxx`
- Then ctest decides whether the test was successful or not based on the return of `main`

---

Try changing the asserts in `palindrome_test.cxx` to see what happens when a test fails.    
You can also run `ctest --output-on-failure` to get more info instead of logging to a file.
