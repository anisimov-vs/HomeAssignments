// Anisimov Vasiliy st129629@student.spbu.ru
// Assignment 4

#ifndef EYE_h
#define EYE_h

#include <iostream>

enum class Eye {
    Blue,
    Green,
    Red,
    Yellow,
    White,
    Black,
    Orange,
    Purple,
    Cyan,
    Brown,
    Gray,
    Pink
};

std::ostream& operator<<(std::ostream&, const Eye& eye);

#endif