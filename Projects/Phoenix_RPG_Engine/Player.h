#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>

class Player
{
private:
    std::string name;
    int health;
    int level;
    int gold;
    std::string weapon;

    std::vector<std::string> inventory;

public:
    Player();

    void DisplayStats();

    std::string GetName();
    int GetHealth();
    int GetLevel();
    int GetGold();
    std::string GetWeapon();

    void TakeDamage(int damage);
    void AddGold(int amount);
    void LevelUp();

    void ShowInventory();
    void UsePotion();
};

#endif