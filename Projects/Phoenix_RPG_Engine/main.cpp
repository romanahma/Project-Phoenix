#include <iostream>
#include "Player.h"
#include "Enemy.h"

int main()
{
    Player player;
    Enemy enemy;

    int choice;

    std::cout << "=====================================\n";
    std::cout << "      PHOENIX RPG ENGINE v1.0\n";
    std::cout << "=====================================\n";

    player.DisplayStats();

    std::cout << "\nA Wild Goblin Appeared!\n";
    enemy.DisplayEnemy();

    while(player.GetHealth() > 0 && enemy.GetHealth() > 0)
    {
        std::cout << "\n========================\n";
        std::cout << "1. Attack\n";
        std::cout << "2. Defend\n";
        std::cout << "3. Use Potion\n";
        std::cout << "4. Inventory\n";
        std::cout << "5. Run\n";
        std::cout << "Choose : ";

        std::cin >> choice;

        if(choice == 1)
        {
            enemy.TakeDamage(20);

            std::cout << "\nYou attacked Goblin.\n";
            std::cout << "Enemy Health : " << enemy.GetHealth() << std::endl;

            if(enemy.GetHealth() <= 0)
                break;

            player.TakeDamage(enemy.GetDamage());

            std::cout << "Goblin attacked you.\n";
            std::cout << "Your Health : " << player.GetHealth() << std::endl;
        }

        else if(choice == 2)
        {
            std::cout << "\nYou defended.\n";

            player.TakeDamage(5);

            std::cout << "Only 5 damage received.\n";
            std::cout << "Your Health : " << player.GetHealth() << std::endl;
        }

        else if(choice == 3)
        {
            player.UsePotion();
        }

        else if(choice == 4)
        {
            player.ShowInventory();
        }

        else if(choice == 5)
        {
            std::cout << "\nYou escaped safely.\n";
            return 0;
        }

        else
        {
            std::cout << "\nInvalid Input.\n";
        }
    }

    if(player.GetHealth() > 0)
    {
        std::cout << "\n🎉 YOU WIN!\n";

        player.AddGold(100);
        player.LevelUp();

        player.DisplayStats();
    }
    else
    {
        std::cout << "\n💀 GAME OVER\n";
    }

    return 0;
}