#include <gtest/gtest.h>
extern "C"
{
#include "../modules/string_operations.h"
}

TEST(test_string_operations, empty) {
    char str[] = "";
    reverse_string(str);

    EXPECT_STREQ("", str);
}

TEST(test_string_operations, one_char) {
    char str[] = "1";
    reverse_string(str);

    EXPECT_STREQ("1", str);
}

TEST(test_string_operations, hello_world) {
    char str[] = "Hello, world!";
    reverse_string(str);

    EXPECT_STREQ("!dlrow ,olleH", str);
}