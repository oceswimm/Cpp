//
//  main.cpp
//  bullCowGame
//
//  Created by Peretti Océane on 12/01/2019.
//  Copyright © 2019 Peretti Océane. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    constexpr int WORD_LENGTH = 5;
    cout << "Welcome to Bulls and Cows, a fun word game!" << endl;
    cout << "Can you guess the " <<WORD_LENGTH;
    cout << " letters isogram I'm thinking of?\n";
    return 0;
}
