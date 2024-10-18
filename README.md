## A C++ Random guesser game, but with a very simpe Anti-cheat.

### Screenshot: 
![image](https://github.com/user-attachments/assets/d788c524-02ea-4a6e-9087-b2799409146d)

### How it works:
\- For `detect-written-memory.cpp`, it is as simple as comparing the random number (after the user has completed the game) with a semi-encrypted copy of it. If it finds out it has changed, it will call the user a cheater.
\- For `avoid-read-value.cpp`, it creates the random number from 2 values from 0 - 50, and does not generate a static version of the number the user needs to put in.

#### Thank you for reading have a good day.
