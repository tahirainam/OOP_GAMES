#include <iostream>
#include <chrono>
#include <thread>

#ifdef _WIN32
#include <windows.h>
#define COLOR_DEFAULT   7
#define COLOR_GREEN     10
#else
#define COLOR_DEFAULT   "\033[0m"
#define COLOR_GREEN     "\033[1;32m"
#endif

using namespace std;

void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void loadingAnimation() {
    cout << "Loading ";
    for (int i = 0; i < 10; ++i) {
        cout << ".";
        cout.flush(); // Ensure output is immediately visible
        // Adjust delay as needed (in milliseconds)
        this_thread::sleep_for(chrono::milliseconds(200));
    }
    cout << endl;
}

int main() {
    cout << COLOR_GREEN << "Welcome to Game Menu!" << COLOR_DEFAULT << endl;
    cout << "1. Tic-Tac-Toe" << endl;
    cout << "2. Hangman" << endl;
    cout << "3. Snake" << endl;
    cout << "Select a game to play: ";
    
    int choice;
    cin >> choice;
    
    clearScreen(); // Clear the screen before starting the game
    loadingAnimation(); // Display loading animation
    
    // Start selected game based on 'choice'
    switch (choice) {
        case 1:
            // Start Tic-Tac-Toe game
            break;
        case 2:
            // Start Hangman game
            break;
        case 3:
            // Start Snake game
            break;
        default:
            cout << "Invalid choice! Exiting..." << endl;
            return 1;
    }
    
    // Game logic goes here...
    
    return 0;
}
