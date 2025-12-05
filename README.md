# Assignment_03
# Snake Water Gun Game 

A simple terminal-based Snake-Water-Gun game written in C.  
This game allows the user to play against the computer, which randomly chooses between Snake (`s`), Water (`w`), and Gun (`g`).

---

## 🎮 Rules
- Snake (`s`) drinks Water (`w`) → **Snake Wins**
- Gun (`g`) kills Snake (`s`) → **Gun Wins**
- Water (`w`) destroys Gun (`g`) → **Water Wins**
- Same choice → **Draw**

---

## 🧠 How the Game Works
- The program asks the player to choose:
  - `s` → Snake
  - `w` → Water
  - `g` → Gun
- Computer randomly selects one option.
- Result is displayed immediately.

---

## ▶️ How to Compile & Run

Open terminal and run:

gcc SWG.c -o SWG
