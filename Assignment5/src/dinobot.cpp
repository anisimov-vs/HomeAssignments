// Anisimov Vasiliy st129629@student.spbu.ru
// Assignment 5

#include "dinobot.h"

std::string Dinobot::transform() const {
    return "Class: Dinobot\n" + Transformer::transform();
}

std::string Dinobot::openFire() const {
    return "Class: Dinobot\n" + Transformer::openFire();
}

std::string Dinobot::ulta() const {
    return "Class: Dinobot\n" + Transformer::ulta();
}

bool Dinobot::roar() {
    return _intensity-- > 0;
}

void Dinobot::setEye(Eye eye) {
    _eye = eye;
}

Eye Dinobot::getEye() const {
    return _eye;
}

void Dinobot::setIntensity(int intensity) {
    _intensity = intensity;
}

int Dinobot::getIntensity() const {
    return _intensity;
}

std::ostream& operator<<(std::ostream& os, const Dinobot& dinobot) {
    os << (Transformer&)dinobot << std::endl;

    os << "Class: Dinobot" << std::endl;
    os << "Eye: " << dinobot.getEye() << std::endl;
    os << "Intensity: " << dinobot.getIntensity();
    
    return os;
}

bool operator>(const Dinobot& dinobot1, const Dinobot& dinobot2) {
    return dinobot1.getIntensity() > dinobot2.getIntensity();
}

bool operator<(const Dinobot& dinobot1, const Dinobot& dinobot2) {
    return dinobot1.getIntensity() < dinobot2.getIntensity();
}

bool operator==(const Dinobot& dinobot1, const Dinobot& dinobot2) {
    return dinobot1.getIntensity() == dinobot2.getIntensity();
}