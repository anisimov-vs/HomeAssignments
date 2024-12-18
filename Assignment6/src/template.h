// Anisimov Vasiliy st129629@student.spbu.ru
// Assignment 6

#include <vector>
#include <iostream>

template <typename T>
class Wrapper {
public:
    Wrapper(T obj, int intField = 0, std::vector<float> vecField = std::vector<float>()) : obj_(obj), intField_(intField), vecField_(vecField) { }

    bool foo() {
        return obj_.bar(intField_, vecField_);
    }

private:
    T obj_;
    int intField_;
    std::vector<float> vecField_;
};

template <>
class Wrapper<int> {
public:
    Wrapper(int) { }
    
    bool foo() {
        return true;
    }
};

template <>
class Wrapper<double> {
public:
    Wrapper(double) { }

    bool foo() {
        return false;
    }
};

class Class1 {
public:
    bool bar(int a, std::vector<float>&) {
        return a > 0;
    }

    int c_1_1() { return 0; }
    float c_1_2() { return 0.0; }
    void c_1_3() { }   
};

class Class2 {
public:
    bool bar(int, std::vector<float>& v) {
        return !v.empty();
    }

    int c_2_1() { return 0; }
    float c_2_2() { return 0.0;}
    void c_2_3() { }
};

class Class3 {
public:
    bool bar(int a, std::vector<float>& v) {
        return a == -(int)v.size();
    }

    int c_3_1() { return 0; }
    float c_3_2() { return 0.0; }
    void c_3_3() { }
};
