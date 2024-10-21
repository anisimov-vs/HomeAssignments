#include "dinobot.h"


bool Dinobot::transform() {
    return true;
}

bool Dinobot::roar() {
    return _intensity-- > 0;
}

void Dinobot::setEye(Eye eye) {
    _eye = eye;
}

Eye Dinobot::getEye() {
    return _eye;
}

void Dinobot::setIntensity(int intennsity) {
    _intensity = intennsity;
}

int Dinobot::getIntensity() {
    return _intensity;
}