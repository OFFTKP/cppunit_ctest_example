cmake_minimum_required(VERSION 3.0)
enable_testing()

# change CPPUNIT_DIR to match the cppunit src directory
set(CPPUNIT_DIR cppunit/src/cppunit)
set(CPPUNIT_FILES 
    ${CPPUNIT_DIR}/AdditionalMessage.cpp
    ${CPPUNIT_DIR}/Asserter.cpp
    ${CPPUNIT_DIR}/CompilerOutputter.cpp
    ${CPPUNIT_DIR}/DefaultProtector.cpp
    ${CPPUNIT_DIR}/Exception.cpp
    ${CPPUNIT_DIR}/Message.cpp
    ${CPPUNIT_DIR}/Protector.cpp
    ${CPPUNIT_DIR}/ProtectorChain.cpp
    ${CPPUNIT_DIR}/SourceLine.cpp
    ${CPPUNIT_DIR}/StringTools.cpp
    ${CPPUNIT_DIR}/SynchronizedObject.cpp
    ${CPPUNIT_DIR}/Test.cpp
    ${CPPUNIT_DIR}/TestCase.cpp
    ${CPPUNIT_DIR}/TestComposite.cpp
    ${CPPUNIT_DIR}/TestFactoryRegistry.cpp
    ${CPPUNIT_DIR}/TestFailure.cpp
    ${CPPUNIT_DIR}/TestLeaf.cpp
    ${CPPUNIT_DIR}/TestNamer.cpp
    ${CPPUNIT_DIR}/TestPath.cpp
    ${CPPUNIT_DIR}/TestResult.cpp
    ${CPPUNIT_DIR}/TestResultCollector.cpp
    ${CPPUNIT_DIR}/TestRunner.cpp
    ${CPPUNIT_DIR}/TestSuccessListener.cpp
    ${CPPUNIT_DIR}/TestSuite.cpp
    ${CPPUNIT_DIR}/TestSuiteBuilderContext.cpp
    ${CPPUNIT_DIR}/TextOutputter.cpp
    ${CPPUNIT_DIR}/TextTestProgressListener.cpp
    ${CPPUNIT_DIR}/TextTestRunner.cpp
    ${CPPUNIT_DIR}/TypeInfoHelper.cpp
)

project(cppunit)
add_library(cppunit ${CPPUNIT_FILES})

project(PalindromeTest)
add_executable(PalindromeTest test_runner.cxx palindrome_test.cxx)
target_link_libraries(PalindromeTest cppunit)
add_test(NAME PalindromeTest COMMAND PalindromeTest)