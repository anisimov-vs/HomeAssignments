// Anisimov Vasiliy st129629@student.spbu.ru
// Assignment 5

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

        std::string transform() const override;
        std::string openFire() const override;
        std::string ulta() const override;

        bool roar();

        void setEye(Eye eye);
        Eye getEye() const;

        void setIntensity(int intensity);
        int getIntensity() const;

        friend std::ostream& operator<<(std::ostream& os, const Dinobot& dinobot);

        friend bool operator>(const Dinobot& dinobot1, const Dinobot& dinobot2);
        friend bool operator<(const Dinobot& dinobot1, const Dinobot& dinobot2);
        friend bool operator==(const Dinobot& dinobot1, const Dinobot& dinobot2);

    private:
        Eye _eye;
        int _intensity;
};

#endif