//
//  main.cpp
//  RPS
//
//  Created by Benj Thomsen on 11/12/18.
//  Copyright © 2018 Benj Thomsen. All rights reserved.
//

#include <iostream>
#include <ctime>

using namespace std;

char Gameplay(string, int);

int main()
{
    srand(time(0));
    char play;
    string choice;
    
    do
    {
    
        int RandomNum = 1 + rand() % 3;
        cout << endl;
        cout << "Rock?\nPaper?\nScissors?\n\nChoose One My Dude!: ";
        cin >> choice;
        cout << endl;
        
        if (choice != "Rock" && choice != "Paper" && choice != "Scissors")
        {
            cout << "Please enter a valid choice: ";
            cin >> choice;
        }
        
        Gameplay(choice, RandomNum);
        
        cout << "\nDo you want to play again? (Y/N) \n";
        cin >> play;
        
        while (! (play == 'Y' || play == 'N'))
        {
            cout << "Please enter a valid input: ";
            cin >> play;
        }
        
    } while (play == 'Y');
    
    return 0;
}

char Gameplay(string userPick, int compPick)
{
    if (userPick == "Rock")
    {
        cout << "You chose Rock.\n";
        if (compPick == 1)
            cout << "Computer chose Rock.\n" << "It's a tie...\n";
        else if (compPick == 2)
            cout << "Computer chose Paper.\n" << "You lost :(\n";
        else if (compPick == 3)
            cout << "Computer chose Scissors.\n" << "You won!!\n";
    }
    
    if (userPick == "Paper")
    {
        cout << "You chose Paper.\n";
        if (compPick == 1)
            cout << "Computer chose Rock.\n" << "You won!!\n";
        else if (compPick == 2)
            cout << "Computer chose Paper.\n" << "It's a tie...\n";
        else if (compPick == 3)
            cout << "Computer chose Scissors.\n" << "You lost :(\n";
    }
    
    if (userPick == "Scissors")
    {
        cout << "You chose Scissors.\n";
        if (compPick == 1)
            cout << "Computer chose Rock.\n" << "You lost :(\n";
        else if (compPick == 2)
            cout << "Computer chose Paper.\n" << "You won!!\n";
        else if (compPick == 3)
            cout << "Computer chose Scissors.\n" << "It's a tie...\n";
    }
    
    return 0;
}
