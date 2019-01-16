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
string GetGuessAndPrintBack();

//entry point for the app
int main() {
    
    PrintIntro();
    GetGuessAndPrintBack();
    
    return 0;
}

//print introduction to the game
void PrintIntro(){
    
    constexpr int WORD_LENGTH = 5;
    cout << "Welcome to Bulls and Cows, a fun word game!\n" ;
    cout << "Can you guess the " <<WORD_LENGTH;
    cout << " letters isogram I'm thinking of?\n";
    return;
}

//get guess from player
string GetGuessAndPrintBack()
{
    string Guess = "";
    cout << "\nEnter your guess: ";
    getline(cin,Guess);
    //print the guess back to them
    cout << "You have typed "<< Guess <<endl;
    return Guess;
}
