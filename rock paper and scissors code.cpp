
#include <iostream>
using namespace std;

int main()
{
    int userChoice, computerChoice;

    srand(time(0));

    cout << "===== ROCK PAPER SCISSORS =====\n";
    cout << "1. Rock\n";
    cout << "2. Paper\n";
    cout << "3. Scissors\n";

    cout << "\nEnter your choice: ";
    cin >> userChoice;

  
    computerChoice = rand() % 3 + 1;

   
    cout << "\nYour choice: ";

    if (userChoice == 1)
        cout << "Rock";
    else if (userChoice == 2)
        cout << "Paper";
    else if (userChoice == 3)
        cout << "Scissors";
    else
        cout << "Invalid choice";

  
    cout << "\nComputer's choice: ";

    if (computerChoice == 1)
        cout << "Rock";
    else if (computerChoice == 2)
        cout << "Paper";
    else
        cout << "Scissors";

    
    if (userChoice < 1 || userChoice > 3)
    {
        cout << "\n\nInvalid choice. Please enter 1, 2, or 3.\n";
    }
    else
    {

        if (userChoice == computerChoice)
        {
            cout << "\n\nResult: It's a draw!";
        }
        else if ((userChoice == 1 && computerChoice == 3) ||
                 (userChoice == 2 && computerChoice == 1) ||
                 (userChoice == 3 && computerChoice == 2))
        {
            cout << "\n\nResult: You win!";
        }
        else
        {
            cout << "\n\nResult: Computer wins!";
        }
    }

    cout << endl;

    return 0;
}
