#include <iostream>
#include <cstdlib>
#include <ctime>

#include "Player.h"
#include "Enemy.h"

int main()
{
    srand(time(0));

    Player player;

    int battlesWon = 0;
    char playAgain = 'Y';

    std::cout << "=====================================\n";
    std::cout << "      PHOENIX RPG ENGINE v1.4\n";
    std::cout << "=====================================\n";

    while ((playAgain == 'Y' || playAgain == 'y') && player.GetHealth() > 0)
    {
        Enemy enemy;

        std::cout << "\n=====================================\n";
        std::cout << "Battle #" << battlesWon + 1 << std::endl;
        std::cout << "=====================================\n";

        enemy.DisplayEnemy();

        while (player.GetHealth() > 0 && enemy.GetHealth() > 0)
        {
            int choice;

            std::cout << "\n========== MENU ==========\n";
            std::cout << "1. Attack\n";
            std::cout << "2. Defend\n";
            std::cout << "3. Use Potion\n";
            std::cout << "4. Inventory\n";
            std::cout << "5. Player Stats\n";
            std::cout << "6. Exit Game\n";
            std::cout << "Choose : ";

            std::cin >> choice;

            switch(choice)
            {
                case 1:
                {
                    int playerDamage = player.GetAttackDamage();

                    enemy.TakeDamage(playerDamage);

                    std::cout << "\nYou attacked Goblin!\n";
                    std::cout << "Damage : " << playerDamage << std::endl;
                    std::cout << "Enemy Health : "
                              << enemy.GetHealth()
                              << std::endl;

                    if(enemy.GetHealth() <= 0)
                    {
                        std::cout << "\nGoblin Defeated!\n";

                        battlesWon++;

                        player.AddGold(100);
                        player.AddXP(50);

                        player.UpgradeWeapon();

                        // SHOP
                        player.OpenShop();

                        break;
                    }

                    int enemyDamage = (rand() % 11) + 10;

                    player.TakeDamage(enemyDamage);

                    std::cout << "\nGoblin attacked you!\n";
                    std::cout << "Damage : "
                              << enemyDamage
                              << std::endl;

                    std::cout << "Your Health : "
                              << player.GetHealth()
                              << std::endl;

                    break;
                }

                case 2:
                {
                    int enemyDamage = (rand() % 6) + 5;

                    player.TakeDamage(enemyDamage);

                    std::cout << "\nYou defended successfully!\n";
                    std::cout << "Damage Received : "
                              << enemyDamage
                              << std::endl;

                    std::cout << "Health : "
                              << player.GetHealth()
                              << std::endl;

                    break;
                }

                case 3:

                    player.UsePotion();
                    break;

                case 4:

                    player.ShowInventory();
                    break;

                case 5:

                    player.DisplayStats();
                    break;

                case 6:

                    std::cout << "\nThanks for Playing!\n";
                    return 0;

                default:

                    std::cout << "\nInvalid Choice!\n";
            }
        }

        if(player.GetHealth() <= 0)
            break;

        std::cout << "\nFight another Goblin? (Y/N): ";
        std::cin >> playAgain;
    }

    std::cout << "\n=========================================\n";
    std::cout << "           GAME SUMMARY\n";
    std::cout << "=========================================\n";

    std::cout << "Battles Won : "
              << battlesWon
              << std::endl;

    std::cout << "Level : "
              << player.GetLevel()
              << std::endl;

    std::cout << "Gold : "
              << player.GetGold()
              << std::endl;

    std::cout << "XP : "
              << player.GetXP()
              << std::endl;

    std::cout << "Weapon : "
              << player.GetWeapon()
              << std::endl;

    std::cout << "=========================================\n";

    return 0;
}