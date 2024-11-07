// Anisimov Vasiliy st129629@student.spbu.ru
// Assignment 4

#include "direction.h"

std::ostream& operator<<(std::ostream& os, const Direction& direction) {
    switch (direction) {
        case Direction::North:
            os << "North";
            break;
        case Direction::South:
            os << "South";
            break;
        case Direction::East:
            os << "East";
            break;
        case Direction::West:
            os << "West";
            break;
    }
    
    return os;
}