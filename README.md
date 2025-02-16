# Word Scramble Game 📝🎮

A simple **Word Scramble Game** written in C++ where players must guess the correct word from a jumbled version.

## 🚀 Features
- 🎲 Randomly selects a word from a list  
- 🔀 Scrambles the word for the player to guess  
- 🏆 Provides **3 attempts** to guess the word  
- 💡 Allows users to ask for a **hint (first letter)**  
- 🔠 **Case-insensitive input** handling  
- 🔁 **Play again feature** after each round  

## 🛠 How to Run
### **1️⃣ Compile the program**
#### **For Windows (MinGW g++)**
Open **Command Prompt (cmd)** in the project folder and run:
```sh
g++ word_scramble.cpp -o word_scramble.exe
```

#### **For Linux/macOS**
Open the terminal and run:
```sh
g++ word_scramble.cpp -o word_scramble
```

### **2️⃣ Run the program**
#### **For Windows**
```sh
word_scramble.exe
```
#### **For Linux/macOS**
```sh
./word_scramble
```

## 🎯 How to Play
1. The game will display a scrambled word.  
2. Type your guess or enter **"hint"** to reveal the first letter.  
3. You have **3 attempts** to guess the correct word.  
4. If you guess correctly, you win! 🎉  
5. If you run out of attempts, the correct word is revealed.  
6. You can **play again** by entering **'y'** when prompted.  

## 📝 Example Gameplay
```
Guess the word: anogm
Enter your guess (or type 'hint' for help): hint
Hint: The first letter is 'm'
Enter your guess: mango
Correct! 🎉 You guessed it in 2 attempt(s)!
```

## 📌 Future Improvements
- 📄 Add a larger word list from a file  
- 🎯 Implement difficulty levels (Easy, Medium, Hard)  
- 👥 Introduce a multiplayer mode  
- 🔊 Add sound effects for better engagement  

💡 **Enjoy playing! Let me know if you have any suggestions!** 🚀🔥
