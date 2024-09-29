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

## Rules
- **Goal:** Uncover all non-mine cells without triggering a mine.
- **Revealing:** Each cell you reveal may show a number indicating how many mines are adjacent. If a revealed cell is empty, neighboring cells are revealed automatically.
- **Flags:** You can place up to 5 flags to mark suspected mine locations.
- **Win condition:** You win by revealing all safe cells while leaving all mines either flagged or unopened.
- **Loss condition:** The game ends if you reveal a mine.

## How to Play
- **Revealing a cell:** Enter the row and column (a-i).
For example: ```a b ```
- **Opening a cell:** Enter `O` to open a cell 
- **Flagging/Unflagging a cell:** Enter the command `F` (for "Flag" or "Unflag").
- **Quitting the game:** Enter `Q` when prompted to exit the game.

## Instructions to Run
- **Clone/Download the repository:** Download the source code and place it in a directory.
- **Install the setup:** Install the setup `MineSweeperSetup.exe` .
- **Run the game:** Run the compiled file `minesweeper.exe` .

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

## Credits
Created by [ABHILASHA]. This project is a simple implementation of Minesweeper for practice with C programming.

## Contacts

- Gmail: abhilashabhatt77@gmail.com
- Github: [Click here](https://github.com/Abhilasha-Bhatt)
- LinkedIn: [Click here](https://www.linkedin.com/in/abhilasha-bhatt3)

Feel free to modify or extend this game!





