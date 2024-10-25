// Anisimov Vasiliy st129629@student.spbu.ru
// Assignment 3

#ifndef GUN_h
#define GUN_h

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
    
    private:
        int _damage;
        int _range;
        int _ammo;
};

#endif