#include "Player.h"
#include <iostream>

Player::Player()
{
    name = "Roman";
    health = 100;
    level = 1;
    gold = 50;
    weapon = "Wooden Sword";

    inventory.push_back("Health Potion");
    inventory.push_back("Health Potion");
}

void Player::DisplayStats()
{
    std::cout << "\n========== PLAYER ==========\n";
    std::cout << "Name   : " << name << std::endl;
    std::cout << "Health : " << health << std::endl;
    std::cout << "Level  : " << level << std::endl;
    std::cout << "Gold   : " << gold << std::endl;
    std::cout << "Weapon : " << weapon << std::endl;
    std::cout << "============================\n";
}

std::string Player::GetName(){ return name; }
int Player::GetHealth(){ return health; }
int Player::GetLevel(){ return level; }
int Player::GetGold(){ return gold; }
std::string Player::GetWeapon(){ return weapon; }

void Player::TakeDamage(int damage)
{
    health -= damage;

    if(health < 0)
        health = 0;
}

void Player::AddGold(int amount)
{
    gold += amount;
}

void Player::LevelUp()
{
    level++;
}

void Player::ShowInventory()
{
    std::cout << "\n===== INVENTORY =====\n";

    if(inventory.empty())
    {
        std::cout << "Inventory Empty!\n";
    }
    else
    {
        for(int i = 0; i < inventory.size(); i++)
        {
            std::cout << i + 1 << ". " << inventory[i] << std::endl;
        }
    }

    std::cout << "=====================\n";
}

void Player::UsePotion()
{
    if(inventory.empty())
    {
        std::cout << "\nNo Health Potion Left!\n";
        return;
    }

    inventory.pop_back();

    health += 30;

    if(health > 100)
        health = 100;

    std::cout << "\nHealth Restored (+30)\n";
    std::cout << "Current Health : " << health << std::endl;
}