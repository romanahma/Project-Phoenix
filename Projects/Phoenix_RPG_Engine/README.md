# 🎮 Phoenix RPG Engine

A terminal-based Role Playing Game (RPG) developed in **C++** using **Object-Oriented Programming (OOP)** principles.

The purpose of this project is to demonstrate how a simple RPG game can be built from scratch using classes, game loops, combat mechanics, inventory management, and modular programming without using any external game engine.

This project is part of my **Project Phoenix** journey, where I build real-world software projects to strengthen my Software Engineering skills.

---

# 📌 Project Information

| Property     | Value                       |
| ------------ | --------------------------- |
| Project Name | Phoenix RPG Engine          |
| Version      | 1.0                         |
| Language     | C++                         |
| Paradigm     | Object-Oriented Programming |
| IDE          | Visual Studio Code          |
| Compiler     | g++                         |
| Platform     | macOS / Linux / Windows     |

---

# 🎯 Objective

The main objective of this project is to learn professional software development by creating a complete terminal-based RPG game.

Instead of writing small practice programs, this project focuses on building a structured application using multiple source files, classes, reusable functions, and game logic.

The project demonstrates practical implementation of software engineering concepts while keeping the gameplay simple and easy to understand.

---

# ✨ Features

## 👤 Player System

* Player creation
* Health management
* Gold system
* Experience (XP)
* Level progression
* Weapon upgrades

---

## 👹 Enemy System

* Enemy class
* Enemy health
* Enemy damage
* Combat interaction

---

## ⚔ Battle System

Players can:

* Attack enemies
* Defend
* Use health potions
* View inventory
* Check player statistics

Every battle rewards the player with experience and gold after defeating an enemy.

---

## 🎒 Inventory System

The player inventory supports storing items such as:

* Health Potion
* Iron Sword
* Diamond Sword

Items are displayed through the inventory menu during gameplay.

---

## 🧪 Potion System

Health potions restore player health during battle.

The inventory automatically removes a potion after use.

---

## 💰 Gold System

Players earn gold after defeating enemies.

Gold can be spent inside the in-game shop.

---

## 🏪 Shop System

The shop allows the player to purchase:

* Health Potion

The shop introduces a basic economy system to the RPG.

---

## 📈 Experience (XP)

Each victory rewards experience points.

Once enough XP is collected, the player levels up automatically.

---

## 🗡 Weapon Upgrade

The weapon progression system includes:

Wooden Sword

↓

Iron Sword

↓

Diamond Sword

Each weapon increases the player's attack damage.

---

# 📂 Project Structure

```text
Phoenix_RPG_Engine
│
├── Player.h
├── Player.cpp
│
├── Enemy.h
├── Enemy.cpp
│
├── main.cpp
│
└── README.md
```

The project follows a modular structure where each class is separated into its own header and implementation file.

This makes the code easier to maintain, debug, and extend.

---

# 🏗 Technologies Used

* C++
* Object-Oriented Programming (OOP)
* Git
* GitHub
* VS Code
* g++ Compiler


---

# 🏛 Object-Oriented Design

The Phoenix RPG Engine follows the Object-Oriented Programming (OOP) approach by separating the game into independent classes.

Each class has its own responsibility, making the code modular, reusable, and easier to maintain.

## Classes Used

### Player Class

Responsible for managing:

* Player Information
* Health
* Gold
* Experience (XP)
* Inventory
* Weapons
* Shop Functions

---

### Enemy Class

Responsible for managing:

* Enemy Health
* Enemy Damage
* Combat Status

---

### Main Program

The `main.cpp` file controls:

* Game Loop
* Battle System
* Player Actions
* Enemy Interaction
* Shop Access
* Game Summary

---

# 📊 Class Relationship Diagram

```text
                 +----------------------+
                 |      main.cpp        |
                 |----------------------|
                 | Game Loop            |
                 | Battle Controller    |
                 | Menu System          |
                 +----------+-----------+
                            |
             +--------------+--------------+
             |                             |
             ▼                             ▼
+--------------------------+      +-----------------------+
|         Player           |      |        Enemy          |
|--------------------------|      |-----------------------|
| Name                     |      | Health                |
| Health                   |      | Damage                |
| Gold                     |      | TakeDamage()          |
| XP                       |      | DisplayEnemy()        |
| Weapon                   |      +-----------------------+
| Inventory                |
| Level                    |
+--------------------------+
```

---

# 🔄 Game Flow Diagram

```text
                START GAME
                     │
                     ▼
             Create Player
                     │
                     ▼
              Spawn Enemy
                     │
                     ▼
        ┌─────────────────────┐
        │      Main Menu      │
        ├─────────────────────┤
        │ 1. Attack           │
        │ 2. Defend           │
        │ 3. Use Potion       │
        │ 4. Inventory        │
        │ 5. Player Stats     │
        │ 6. Exit             │
        └─────────────────────┘
                     │
                     ▼
            Enemy Defeated?
               │         │
             NO          YES
              │           │
              ▼           ▼
      Continue Battle   Reward Player
                          │
                          ▼
                      Add Gold
                          │
                          ▼
                        Add XP
                          │
                          ▼
                    Upgrade Weapon
                          │
                          ▼
                      Open Shop
                          │
                          ▼
                 Fight Again? (Y/N)
                      │         │
                     YES       NO
                      │         │
                      ▼         ▼
                 Spawn Enemy   Summary
```

---

# ⚙ Game Logic

The game follows a continuous battle loop.

1. The player is created.
2. An enemy is spawned.
3. The player selects an action.
4. The enemy responds.
5. Health values are updated.
6. The battle continues until one side is defeated.
7. If the player wins:

   * Gold is awarded.
   * XP is awarded.
   * Weapon upgrades are applied.
   * Shop becomes available.
8. The player chooses whether to continue or end the game.

---

# 🧠 Algorithms Used

The project uses several fundamental programming algorithms.

## Random Number Generation

The enemy damage is generated using the C++ random number generator.

This makes each battle different.

---

## Decision Making

The game relies heavily on:

* if
* else
* switch

statements for handling player choices and game events.

---

## Looping

Different loops are used throughout the project.

Examples include:

* Game Loop
* Battle Loop
* Shop Loop
* Inventory Traversal

---

## Inventory Traversal

The inventory is stored using a vector.

Whenever the player uses a potion or displays inventory, the vector is traversed to locate the required item.

---

# 🧩 OOP Concepts Demonstrated

The project demonstrates the following Object-Oriented Programming concepts:

* Classes
* Objects
* Encapsulation
* Data Hiding
* Member Functions
* Constructors
* Modular Programming
* Reusability
* Separation of Responsibilities

These concepts make the code cleaner, easier to understand, and simpler to extend in future versions.

---

# ▶️ Installation

## Requirements

Before running the project, make sure you have:

* C++ Compiler (g++)
* Visual Studio Code (Recommended)
* Git (Optional)

---

# ▶️ How to Compile

Open the terminal inside the project directory and run:

```bash
g++ *.cpp -o game
```

---

# ▶️ How to Run

### macOS / Linux

```bash
./game
```

### Windows

```bash
game.exe
```

---

# 🎮 Gameplay

The game starts by creating a player and spawning an enemy.

The player can perform different actions during each battle:

* Attack
* Defend
* Use Health Potion
* View Inventory
* View Player Statistics
* Exit Game

Defeating enemies rewards the player with:

* Gold
* Experience (XP)
* Weapon Upgrades

The player can also purchase Health Potions from the in-game shop before continuing the adventure.

---

# 📸 Screenshots

> Screenshots will be added after future updates.

Suggested screenshots:

* Main Menu
* Battle Screen
* Shop
* Inventory
* Player Statistics
* Game Summary

Example:

```
Screenshots/
│
├── main_menu.png
├── battle.png
├── inventory.png
├── shop.png
└── summary.png
```

---

# 📚 What I Learned

This project helped me strengthen my understanding of:

* Object-Oriented Programming (OOP)
* Class Design
* Modular Programming
* Header and Source File Separation
* C++ Standard Library
* Vectors
* Loops
* Conditional Statements
* Random Number Generation
* Game Loop Design
* Inventory Management
* Debugging
* Git
* GitHub Workflow

More importantly, it taught me how to build and complete a software project from start to finish.

---

# 🚀 Future Improvements (Version 2)

Some ideas planned for future versions include:

* Multiple Enemy Types
* Boss Battles
* Save / Load Game
* Player Skills
* Armor System
* Magic System
* Quest System
* NPC Interactions
* Multiple Maps
* Sound Effects
* Graphical User Interface (SFML / SDL2)
* Animations
* Multiplayer Support

These features are intentionally reserved for future versions to keep Version 1.0 focused and complete.

---

# 🏆 Project Status

**Version:** 1.0

**Current Status:**

✅ Completed

The current version successfully demonstrates the core mechanics of a terminal-based RPG game using C++ and Object-Oriented Programming principles.

---

# 🤝 Acknowledgements

This project was developed as part of my personal learning journey under **Project Phoenix**, where the goal is to become a professional Software Engineer by building real-world software projects.

---

# 👨‍💻 Author

**Roman Ahmad**

Computer Science Student

Future Software Engineer | AI Engineer | Game Developer

GitHub:

https://github.com/romanahma

LinkedIn:

https://www.linkedin.com/in/romanahmad-ds/

---

# ⭐ Support

If you found this project helpful or interesting, consider giving the repository a ⭐ on GitHub.

Every project in **Project Phoenix** represents another step in my journey toward becoming a professional Software Engineer.

Thank you for visiting this repository!
