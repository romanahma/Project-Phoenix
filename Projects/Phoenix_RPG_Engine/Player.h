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
    int xp;
    std::string weapon;

    std::vector<std::string> inventory;

public:
    Player();

    void DisplayStats();

    std::string GetName();
    int GetHealth();
    int GetLevel();
    int GetGold();
    int GetXP();
    std::string GetWeapon();

    void TakeDamage(int damage);

    void AddGold(int amount);

    void AddXP(int amount);

    void LevelUp();

    void ShowInventory();

    void UsePotion();

    int GetAttackDamage();

    void UpgradeWeapon();

    // NEW FUNCTIONS
    void BuyPotion();
    void OpenShop();
};

#endif