// Anisimov Vasiliy st129629@student.spbu.ru
// Assignment 4

#ifndef GUN_h
#define GUN_h

#include <iostream>

class Gun {
    public:
        Gun(int damage = 10, int range = 10, int ammo = 100) : _damage(damage), _range(range), _ammo(ammo) { };
        ~Gun() { };

        void setDamage(int damage);
        int getDamage() const;

        void setRange(int range);
        int getRange() const;

        void setAmmo(int ammo);
        int getAmmo() const;

        bool fire();

        friend std::ostream& operator<<(std::ostream&, const Gun& gun);

        friend bool operator>(const Gun& gun1, const Gun& gun2);
        friend bool operator<(const Gun& gun1, const Gun& gun2);
        friend bool operator==(const Gun& gun1, const Gun& gun2);
    
    private:
        int _damage;
        int _range;
        int _ammo;
};

#endif