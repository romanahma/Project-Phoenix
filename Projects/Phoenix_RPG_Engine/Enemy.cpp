#include "Enemy.h"
#include <iostream>

Enemy::Enemy()
{
    name = "Goblin";
    health = 80;
    damage = 15;
}

void Enemy::DisplayEnemy()
{
    std::cout << "\n========== ENEMY ==========\n";
    std::cout << "Name   : " << name << std::endl;
    std::cout << "Health : " << health << std::endl;
    std::cout << "Damage : " << damage << std::endl;
    std::cout << "===========================\n";
}

std::string Enemy::GetName(){ return name; }
int Enemy::GetHealth(){ return health; }
int Enemy::GetDamage(){ return damage; }

void Enemy::TakeDamage(int damage)
{
    health -= damage;

    if (health < 0)
        health = 0;
}