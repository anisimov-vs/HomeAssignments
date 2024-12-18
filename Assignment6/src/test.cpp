// Anisimov Vasiliy st129629@student.spbu.ru
// Assignment 6

#include <gtest/gtest.h>

#include "template.h"

TEST(Class1Test, True) {
    Class1 obj;
    Wrapper<Class1> wrapper(obj, 1);
    EXPECT_TRUE(wrapper.foo());
}

TEST(Class1Test, False) {
    Class1 obj;
    Wrapper<Class1> wrapper(obj, 0);
    EXPECT_FALSE(wrapper.foo());
}

TEST(Class2Test, True) {
    Class2 obj;
    Wrapper<Class2> wrapper(obj, 0, {1.0, 2.0, 3.0});
    EXPECT_TRUE(wrapper.foo());
}

TEST(Class2Test, False) {
    Class2 obj;
    Wrapper<Class2> wrapper(obj, 0, { });
    EXPECT_FALSE(wrapper.foo());
}

TEST(Class3Test, True) {
    Class3 obj;
    Wrapper<Class3> wrapper(obj, -1, { 1.0 });
    EXPECT_TRUE(wrapper.foo());
}

TEST(Class3Test, False) {
    Class3 obj;
    Wrapper<Class3> wrapper(obj, 0, {1.0, 2.0, 3.0});
    EXPECT_FALSE(wrapper.foo());
}

TEST(IntTest, True) {
    Wrapper<int> wrapper(1);
    EXPECT_TRUE(wrapper.foo());
}

TEST(DoubleTest, False) {
    Wrapper<double> wrapper(1.0);
    EXPECT_FALSE(wrapper.foo());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}