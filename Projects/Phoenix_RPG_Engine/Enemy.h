#ifndef ENEMY_H
#define ENEMY_H

#include <string>

class Enemy
{
private:
    std::string name;
    int health;
    int damage;

public:
    Enemy();

    void DisplayEnemy();

    std::string GetName();
    int GetHealth();
    int GetDamage();

    void TakeDamage(int damage);
};

#endif