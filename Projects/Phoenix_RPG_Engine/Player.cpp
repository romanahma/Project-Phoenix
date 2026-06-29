#include "Player.h"
#include <iostream>

Player::Player()
{
    name = "Roman";
    health = 100;
    level = 1;
    gold = 50;
    xp = 0;
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
    std::cout << "XP     : " << xp << "/100" << std::endl;
    std::cout << "Gold   : " << gold << std::endl;
    std::cout << "Weapon : " << weapon << std::endl;
    std::cout << "Attack : " << GetAttackDamage() << std::endl;
    std::cout << "============================\n";
}

std::string Player::GetName()
{
    return name;
}

int Player::GetHealth()
{
    return health;
}

int Player::GetLevel()
{
    return level;
}

int Player::GetGold()
{
    return gold;
}

int Player::GetXP()
{
    return xp;
}

std::string Player::GetWeapon()
{
    return weapon;
}

void Player::TakeDamage(int damage)
{
    health -= damage;

    if (health < 0)
        health = 0;
}

void Player::AddGold(int amount)
{
    gold += amount;
}

void Player::AddXP(int amount)
{
    xp += amount;

    std::cout << "\n+" << amount << " XP Gained!\n";

    while (xp >= 100)
    {
        xp -= 100;
        LevelUp();
    }
}

void Player::LevelUp()
{
    level++;

    std::cout << "\n***************************\n";
    std::cout << "       LEVEL UP!\n";
    std::cout << "     Level " << level << std::endl;
    std::cout << "***************************\n";
}

void Player::ShowInventory()
{
    std::cout << "\n======= INVENTORY =======\n";

    if (inventory.empty())
    {
        std::cout << "Inventory Empty!\n";
    }
    else
    {
        for (int i = 0; i < inventory.size(); i++)
        {
            std::cout << i + 1 << ". " << inventory[i] << std::endl;
        }
    }

    std::cout << "=========================\n";
}

void Player::UsePotion()
{
    for (int i = 0; i < inventory.size(); i++)
    {
        if (inventory[i] == "Health Potion")
        {
            inventory.erase(inventory.begin() + i);

            health += 30;

            if (health > 100)
                health = 100;

            std::cout << "\nHealth Restored (+30)\n";
            std::cout << "Current Health : " << health << std::endl;
            return;
        }
    }

    std::cout << "\nNo Health Potion Left!\n";
}

int Player::GetAttackDamage()
{
    if (weapon == "Wooden Sword")
        return 20;

    if (weapon == "Iron Sword")
        return 35;

    if (weapon == "Diamond Sword")
        return 50;

    return 10;
}

void Player::UpgradeWeapon()
{
    if (weapon == "Wooden Sword")
    {
        weapon = "Iron Sword";
        inventory.push_back("Iron Sword");

        std::cout << "\nWeapon Upgraded -> Iron Sword\n";
    }
    else if (weapon == "Iron Sword")
    {
        weapon = "Diamond Sword";
        inventory.push_back("Diamond Sword");

        std::cout << "\nWeapon Upgraded -> Diamond Sword\n";
    }
    else
    {
        std::cout << "\nMaximum Weapon Already Equipped!\n";
    }
}

void Player::BuyPotion()
{
    if (gold >= 50)
    {
        gold -= 50;
        inventory.push_back("Health Potion");

        std::cout << "\nPotion Purchased!\n";
    }
    else
    {
        std::cout << "\nNot enough Gold!\n";
    }
}

void Player::OpenShop()
{
    int choice;

    do
    {
        std::cout << "\n========== SHOP ==========\n";
        std::cout << "Gold : " << gold << std::endl;
        std::cout << "1. Buy Health Potion (50 Gold)\n";
        std::cout << "2. Exit Shop\n";
        std::cout << "Choose : ";

        std::cin >> choice;

        switch(choice)
        {
            case 1:
                BuyPotion();
                break;

            case 2:
                std::cout << "Leaving Shop...\n";
                break;

            default:
                std::cout << "Invalid Choice!\n";
        }

    } while(choice != 2);
}