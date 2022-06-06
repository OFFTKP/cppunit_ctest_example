#include <string>

struct Foo {
    static bool IsPalindrome(std::string str) {
        auto size = str.size();
        for (int i = 0; i < size / 2; ++i) {
            if (str[i] != str[size - i - 1])
                return false;
        }
        return true;
    }
};