#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>
#include <random>

using namespace std;

// Function to shuffle the letters of a word
string shuffleWord(string word) {
    random_device rd;
    mt19937 g(rd());
    shuffle(word.begin(), word.end(), g);
    return word;
}

// Function to convert a string to lowercase (case-insensitive comparison)
string toLowerCase(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

int main() {
    srand(time(0));

    vector<string> words = {"apple", "banana", "cherry", "mango", "orange", "grape", "peach", "melon"};
    int totalWords = words.size();

    char playAgain;
    do {
        // Pick a random word
        string originalWord = words[rand() % totalWords];
        string scrambledWord = shuffleWord(originalWord);

        cout << "\nGuess the word: " << scrambledWord << endl;

        int attempts = 3;
        string userGuess;
        bool guessedCorrectly = false;

        while (attempts > 0) {
            cout << "Enter your guess (or type 'hint' for help): ";
            cin >> userGuess;
            userGuess = toLowerCase(userGuess); // Convert user input to lowercase

            if (userGuess == "hint") {
                cout << "Hint: The first letter is '" << originalWord[0] << "'" << endl;
                continue; // Don't decrease attempt count for hint usage
            }

            if (userGuess == originalWord) {
                cout << "Correct! 🎉 You guessed it in " << (4 - attempts) << " attempt(s)!" << endl;
                guessedCorrectly = true;
                break;
            } else {
                attempts--;
                cout << "Wrong! Attempts left: " << attempts << endl;
            }
        }

        if (!guessedCorrectly) {
            cout << "Out of attempts! The correct word was: " << originalWord << endl;
        }

        cout << "\nDo you want to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing! 🎮" << endl;
    return 0;
}
