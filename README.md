# MineSweeperSetup

# MineSweeper

## Overview
This is a terminal-based implementation of the classic Minesweeper game written in C. The game randomly places mines on a 9x9 board, and the player must reveal all non-mine cells without triggering a mine. The player can flag suspected mines to help avoid revealing them accidentally. You win the game by revealing all safe cells, and the game ends if you open a mine.

## Features
- **9x9 grid:** The game is played on a 9x9 grid with 10 hidden mines.
- **Random mine placement:** Mines are placed randomly on the board at the start of the game.
- **Flag system:** You can mark (flag) suspected mines with a maximum of 5 flags.
- **Recursive opening:** When you open an empty cell (0), all adjacent empty cells are revealed recursively.
- **Victory condition:** The game is won by revealing all non-mine cells.
- **Loss condition:** The game ends if you open a cell with a mine.

## Instructions to Run for windows
- Open the link given below in *Download link*.
- Download the zip folder.
- Extract all files from downloaded zip folder.
- Install `mineSweeperSetup.exe`.
- Run the `minesweeper.exe` file to play the game.
  
## Instructions to Run for linux
- Open the link given below in *Download link*.
- Download the zip folder.
- Extract all files from downloaded zip folder.
- Opem terminal and enter `gcc minesweeper.c -o minesweeper`
- Now enter `/minesweeper`

## Sample Output
```
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
:                                                                         :
: ___  ___ __ __  __  ____     __  __    __  ____  ____ ____   ____ ____  :
: ||\\//|| || ||\ || ||       (( \ ||    || ||    ||    || \\ ||    || \\ :
: || \/ || || ||\\|| ||==      \\  \\ /\ // ||==  ||==  ||_// ||==  ||_// :
: ||    || || || \|| ||___    \_))  \V/\V/  ||___ ||___ ||    ||___ || \\ :
:                                                                         :
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

                     ~~~RULES FOR GAME~~~
-> Goal: Uncover all non-mine cells without hitting a mine.
-> Revealing: Numbers show nearby mines; empty cells reveal neighbors.
-> Flags: You have 5 flags to mark suspected mines.
-> Win: Reveal all safe cells to win; hitting a mine ends the game.

FLAGS LEFT= 5

   | a | b | c | d | e | f | g | h | i |
  +-------------------------------------+
 a |   |   |   |   |   |   |   |   |   |
  +-------------------------------------+
 b |   |   |   |   |   |   |   |   |   |
  +-------------------------------------+
 c |   |   |   |   |   |   |   |   |   |
  +-------------------------------------+
 d |   |   |   |   |   |   |   |   |   |
  +-------------------------------------+
 e |   |   |   |   |   |   |   |   |   |
  +-------------------------------------+
 f |   |   |   |   |   |   |   |   |   |
  +-------------------------------------+
 g |   |   |   |   |   |   |   |   |   |
  +-------------------------------------+
 h |   |   |   |   |   |   |   |   |   |
  +-------------------------------------+
 i |   |   |   |   |   |   |   |   |   |
  +-------------------------------------+
Enter row and column (a-i):a a
Enter 'O' to open the cell and 'F' to flag or unflag the cell or 'Q' to quit:O
```

## Game Endings
- **Win:** If all safe cells are revealed.
```
 __   __  __ __   ___   __ __      __    __  ____  ____    __  __
|  ||  | |  |  | /   \ |  |  |    |  |__|  ||    ||    \  |  ||  |
|  ||  | |  |  ||     ||  |  |    |  |  |  | |  | |  _  | |  ||  |
|__||__| |  ~  ||  O  ||  |  |    |  |  |  | |  | |  |  | |__||__|
 __  __  |___, ||     ||  :  |    |  `  '  | |  | |  |  |  __  __
|  ||  | |     ||     ||     |     \      /  |  | |  |  | |  ||  |
|__||__| |____/  \___/  \__,_|      \_/\_/  |____||__|__| |__||__|


 ___  ___  _____  _____  __  __  _____   _____  __ __  _____  _____  ___  ___
/   \/   \/   __\/  _  \/  \/  \/   __\ /  _  \/  |  \/   __\/  _  \/   \/   \
\___/\___/|  |_ ||  _  ||  \/  ||   __| |  |  |\  |  /|   __||  _  <\___/\___/
<___><___>\_____/\__|__/\__ \__/\_____/ \_____/ \___/ \_____/\__|\_/<___><___>

```

- **Loss:** If you hit a mine.
```
 __  __   __ __   ___   __ __      __ __  ____  ______       ____       ___ ___  ____  ____     ___   __  __
|  ||  | |  |  | /   \ |  |  |    |  |  ||    ||      |     /    |     |   |   ||    ||    \   /  _] |  ||  |
|  ||  | |  |  ||     ||  |  |    |  |  | |  | |      |    |  o  |     | _   _ | |  | |  _  | /  [_  |  ||  |
|__||__| |  ~  ||  O  ||  |  |    |  _  | |  | |_|  |_|    |     |     |  \_/  | |  | |  |  ||    _] |__||__|
 __  __  |___, ||     ||  :  |    |  |  | |  |   |  |      |  _  |     |   |   | |  | |  |  ||   [_   __  __
|  ||  | |     ||     ||     |    |  |  | |  |   |  |      |  |  |     |   |   | |  | |  |  ||     | |  ||  |
|__||__| |____/  \___/  \__,_|    |__|__||____|  |__|      |__|__|     |___|___||____||__|__||_____| |__||__|
```

## Dependencies
- A C compiler like GCC
- Terminal or command-line interface
  
## Download Link
[Click here](https://github.com/Abhilasha-Bhatt/MineSweeperSetup/releases/tag/MineSweeper)
## Credits
Created by [![ABHILASHA](https://img.shields.io/badge/ABHILASHA-Profile-blue?style=for-the-badge)](https://www.linkedin.com/in/abhilasha-bhatt3/)
. This project is a simple implementation of Minesweeper for practice with C programming.

[![Kunal Upadhyay GitHub](https://img.shields.io/badge/Kunal_Upadhyay-GitHub-red?logo=github&style=for-the-badge)](https://github.com/Kunal-Upadhyay)                           [![Prateek Kumar GitHub](https://img.shields.io/badge/Prateek_Kumar-GitHub-red?logo=github&style=for-the-badge)](https://github.com/geeekdude)

## Contacts

[![Gmail](https://img.shields.io/badge/-Gmail-D14836?logo=gmail&logoColor=white&style=for-the-badge)](mailto:abhilashabhatt77@gmail.com)


[![LinkedIn](https://img.shields.io/badge/-LinkedIn-blue?logo=linkedin&logoColor=white&style=for-the-badge)](https://www.linkedin.com/in/abhilasha-bhatt3/)

[![GitHub](https://img.shields.io/badge/-GitHub-181717?logo=github&logoColor=white&style=for-the-badge)](https://github.com/Abhilasha-Bhatt)


Feel free to modify or extend this game!
