//
//  main.cpp
//  bullCowGame
//
//  Created by Peretti Océane on 12/01/2019.
//  Copyright © 2019 Peretti Océane. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
void PrintIntro();
string GetGuess();
bool AskToPlayAgain();

static void PlayGame() {
    constexpr int LOOP_THROUGH = 5;
    for(int count=0; count<LOOP_THROUGH;count++)
    {
        string guess = GetGuess();
        cout << "You have typed "<< guess <<endl;
    }
}

//entry point for the app
int main() {
    
    PrintIntro();
    
    
    PlayGame();//loop for number of turns asking for guesses
    AskToPlayAgain();
    
    
    return 0;//exit app
}

void PrintIntro()

{
    
    //introduce the game
    constexpr int WORD_LENGTH = 5;
    cout << "Welcome to Bulls and Cows, a fun word game!\n" ;
    cout << "Can you guess the " <<WORD_LENGTH;
    cout << " letters isogram I'm thinking of?\n";
    return;
}
//get guess from player
string GetGuess()
{
    string Guess = "";
    cout << "Enter your guess: ";
    getline(cin,Guess);
    //print the guess back to them
    return Guess;
}
bool AskToPlayAgain()
{
    cout << "Do you want to play again? ";
    string Response = "";
    getline(cin, Response);
    if (Response[0] == 'y' || Response[0] == 'Y')
    {
        cout << "Okaayy" << endl;
        return true;
    }
    else{
        cout << "Connard" << endl;
        return false;
    }
}
