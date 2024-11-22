// Anisimov Vasiliy st129629@student.spbu.ru
// Assignment 5

#ifndef DIRECTION_h
#define DIRECTION_h

#include <iostream>

enum class Direction {
    North,
    South,
    East,
    West
};

std::ostream& operator<<(std::ostream&, const Direction& direction);

#endif