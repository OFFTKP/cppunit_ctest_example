#include "palindrome.hxx"
#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

namespace {
    class TestPalindrome : public CppUnit::TestFixture {
        void testPalindromes();
        CPPUNIT_TEST_SUITE(TestPalindrome);
        CPPUNIT_TEST(testPalindromes);
        CPPUNIT_TEST_SUITE_END();
    };

    void TestPalindrome::testPalindromes() {
        CPPUNIT_ASSERT_EQUAL(true, Foo::IsPalindrome("lool"));
        CPPUNIT_ASSERT_EQUAL(true, Foo::IsPalindrome("lol"));
        CPPUNIT_ASSERT_EQUAL(false, Foo::IsPalindrome("loo"));
        // If this is uncommented the test will fail
        // CPPUNIT_ASSERT_EQUAL(true, Foo::IsPalindrome("loo"));
    }

    CPPUNIT_TEST_SUITE_REGISTRATION(TestPalindrome);
}