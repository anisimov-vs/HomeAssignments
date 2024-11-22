// Anisimov Vasiliy st129629@student.spbu.ru
// Assignment 5

#include "eye.h"


std::ostream& operator<<(std::ostream& os, const Eye& eye) {
    switch (eye) {
        case Eye::Blue:
            os << "Blue";
            break;
        case Eye::Green:
            os << "Green";
            break;
        case Eye::Red:
            os << "Red";
            break;
        case Eye::Yellow:
            os << "Yellow";
            break;
        case Eye::White:
            os << "White";
            break;
        case Eye::Black:
            os << "Black";
            break;
        case Eye::Orange:
            os << "Orange";
            break;
        case Eye::Purple:
            os << "Purple";
            break;
        case Eye::Cyan:
            os << "Cyan";
            break;
        case Eye::Brown:
            os << "Brown";
            break;
        case Eye::Gray:
            os << "Gray";
            break;
        case Eye::Pink:
            os << "Pink";
    }
    
    return os;
}