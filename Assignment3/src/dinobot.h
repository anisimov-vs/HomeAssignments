#ifndef Dinobot_h
#define Dinobot_h

#include "transformer.h"
#include "eye.h"
#include "gun.h"
#include "direction.h"

class Dinobot: public Transformer {
    public:
        Dinobot(enum Direction direction = Direction::North, Gun* gun = new Gun(), std::string name = "Dinobot 404", int level = 10, int strength = 10, int fuel = 100, int health = 100, Eye eye = Eye::Green, int intensity = 10) : Transformer(direction, gun, name, level, strength, fuel, health), _eye(eye), _intensity(intensity)  { };
        ~Dinobot() { }

        bool transform();
        bool roar();

        void setEye(Eye eye);
        Eye getEye();

        void setIntensity(int force);
        int getIntensity();

    private:
        Eye _eye;
        int _intensity;
};

#endif