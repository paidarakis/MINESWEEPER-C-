# Overview of the Minesweeper Code

Imagine turning your computer into a classic, fun puzzle game **Minesweeper** played right in your command line! This program, built with **C++**, lets you enjoy the game by typing simple commands, with the computer managing all the tricky parts behind the scenes.

---

##  What Does the Code Do?

- **Builds a Game Grid:**  
  Creates a grid of tiny squares (cells). Some of these contain hidden mines (dangerous spots), while others are safe.

- **Places Mines Smartly:**  
  Mines are randomly hidden *after* your first move, so your very first step is always safe—no surprises at the start!

- **Lets You Play:**  
  You can:
  - **Reveal a Cell:** See what's underneath, revealing safe areas or mines.
  - **Flag a Cell:** Mark suspected mines to remember where they might be.

- **Uncovers Safe Zones Automatically:**  
  When you reveal a cell with no nearby mines, the game automatically uncovers adjacent safe cells—making progress smoother and more fun.

- **Detects Win or Loss:**  
  The game ends when:
  - You uncover a mine (you lose!).
  - You reveal all safe cells (you win!).

- **Displays the Current Game State:**  
  After each move, the game shows the grid with symbols and colors—keeping you visually informed about which cells are hidden, flagged, or revealed.

---

## How the Program Works Behind the Scenes

1. **Setup:**  
   Initializes a clean grid with all cells hidden and ready.

2. **Waiting for Your Commands:**  
   The game patiently waits for you to type commands to reveal or flag cells.

3. **Processing Your Moves:**  
   When you make a move, the program updates the grid accordingly—revealing numbers, uncovering safe zones, or marking flags.

4. **Refreshing the Display:**  
   Shows the updated grid, so you always know the current game situation.

5. **Repeats Until Endgame:**  
   Continues this cycle until you win or hit a mine.

---

##  Requirements

- A Windows PC (the program uses Windows-specific features for colors)
- A C++ compiler supporting C++11 or newer

---

## Credits

This project was developed and brought to life by:

- **Alexandros Kozaris** — AEM: 23054
- **Stefanos Skenteridis** — AEM: 23118
- **Konstantinos Paidarakis** — AEM:23077

##  How to Compile and Play

Use your favorite compiler. For example, with **g++**:

```bash
g++ -o Minesweeper Minesweeper.cpp
./Minesweeper
