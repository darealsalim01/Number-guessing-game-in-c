# 🎲 Number Guessing Game

A simple command-line game written in C — guess the secret number and see if you're right!

## 🎮 How it works

The program picks a random number between **1 and 10**. You enter your guess, and it tells you if you're right or wrong.

## 🛠️ Build & Run

```bash
gcc main.c -o game
./game
```

## 📌 Example

```
*****Number Guessing Game*****
Guess a number from 1 to 10 :
7
Your Guess is Wrong , The number is 3
```

## 🧰 Built With

- C (Standard Library)
- `rand()` / `srand()` for random number generation
