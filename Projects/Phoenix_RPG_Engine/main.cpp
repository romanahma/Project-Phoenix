#include <iostream>
#include "Player.h"
#include "Enemy.h"

int main()
{
    Player player;

    char playAgain = 'Y';

    std::cout << "=====================================\n";
    std::cout << "      PHOENIX RPG ENGINE v1.2\n";
    std::cout << "=====================================\n";

    while(playAgain == 'Y' || playAgain == 'y')
    {
        Enemy enemy;

        std::cout << "\n=====================================\n";
        std::cout << "A Wild Goblin Appeared!\n";
        std::cout << "=====================================\n";

        enemy.DisplayEnemy();

        while(player.GetHealth() > 0 && enemy.GetHealth() > 0)
        {
            int choice;

            std::cout << "\n========================\n";
            std::cout << "1. Attack\n";
            std::cout << "2. Defend\n";
            std::cout << "3. Use Potion\n";
            std::cout << "4. Inventory\n";
            std::cout << "5. Show Player Stats\n";
            std::cout << "6. Run Away\n";
            std::cout << "Choose : ";

            std::cin >> choice;

            switch(choice)
            {
                case 1:

                    enemy.TakeDamage(player.GetAttackDamage());

                    std::cout << "\nYou attacked Goblin!\n";
                    std::cout << "Damage : "
                              << player.GetAttackDamage()
                              << std::endl;

                    std::cout << "Enemy Health : "
                              << enemy.GetHealth()
                              << std::endl;

                    if(enemy.GetHealth() <= 0)
                    {
                        std::cout << "\nGoblin Defeated!\n";

                        player.AddGold(100);
                        player.AddXP(50);

                        player.UpgradeWeapon();

                        break;
                    }

                    player.TakeDamage(enemy.GetDamage());

                    std::cout << "\nGoblin attacked you!\n";
                    std::cout << "Your Health : "
                              << player.GetHealth()
                              << std::endl;

                    break;

                case 2:

                    std::cout << "\nYou defended.\n";

                    player.TakeDamage(5);

                    std::cout << "Only 5 damage received.\n";
                    std::cout << "Health : "
                              << player.GetHealth()
                              << std::endl;

                    break;

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

                    std::cout << "\nYou escaped from battle.\n";
                    return 0;

                default:

                    std::cout << "\nInvalid Choice.\n";
            }
        }

        if(player.GetHealth() <= 0)
        {
            std::cout << "\n=========== GAME OVER ===========\n";
            break;
        }

        std::cout << "\nDo you want to fight another Goblin? (Y/N): ";
        std::cin >> playAgain;
    }

    std::cout << "\n=====================================\n";
    std::cout << "Thanks for Playing Phoenix RPG Engine!\n";
    std::cout << "=====================================\n";

    player.DisplayStats();

    return 0;
}