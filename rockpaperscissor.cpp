/**
 * This is a sample program that simulates the rock-scissor-paper game
 * User will pick their option and play with the computer whose option is picked randomly
 * */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <unistd.h>

#define ROCK 'R'
#define PAPER 'P'
#define SCISSORS 'S'


using namespace std;

/**
 * UserPick()
 *
 */
char UserPick(int user)
{
    char res;
    // user's pick
    char n;     // In case of invalid option
    cout << "Welcome to Rock - Paper - Scissors. Let's pick your choice..." << endl;
    cout << "1 - Rock\n2 - Paper\n3 - Scissors\n";
    cout << "Let's pick your option: ";

    cin >> user;
    if(user == 1)
    {
        res = ROCK;
        cout << "You pick ROCK!\n";
    }
    else if(user == 2)
    {
        res = PAPER;
        cout << "You pick PAPER!\n";
    }
    else if(user == 3)
    {
        res = SCISSORS;
        cout << "You pick SCISSORS!\n";
    }
    else
    {
        cout << "Invalid option. Try again? (Press Y to continue): ";
        cin >> n;
        if(n == 'Y' || n == 'y')
        {
            UserPick(user);
        }
        else
        {
            cout << "See you next time ^.^" << endl;
            exit(0);
        }

    }

    return res;
}
/**
 * ComputerPick()
 *
 **/
char ComputerPick(int computer)
{
    char res;
    cout << "*******************************************" << endl;
    cout << "Give me a while for my turn..." << endl;
    srand(time(0));

    sleep(2);
    // Pick a random option
    computer = rand() % 3 + 1;     // Possible outcomes: 1 || 2 || 3


    if(computer == 1)
    {
        res = ROCK;
        cout << "Okay. I pick ROCK!" << endl;
    }
    if(computer == 2)
    {
        res = PAPER;
        cout << "Okay. I pick PAPER!" << endl;
    }
    if(computer == 3)
    {
        res = SCISSORS;
        cout << "Okay. I pick SCISSORS!" << endl;
    }

    return res;

}


int main()
{
    int u, c;

    char user = UserPick(u);
    char computer = ComputerPick(c);

    cout << "\nThen, the result is..." << endl;
    sleep(2);

    if(user == ROCK && computer == PAPER)
    {
        cout << "Paper wraps Rock. I win :)" << endl;
    }
    else if(user == ROCK && computer == SCISSORS)
    {
        cout << "Rock smashes Scissors. You win :(" << endl;
    }
    else if(user == PAPER && computer == ROCK)
    {
        cout << "Paper wraps Rock. You win :(" << endl;
    }
    else if(user == PAPER && computer == SCISSORS)
    {
        cout << "Scissors cut Paper. I win :)" << endl;
    }
    else if(user == SCISSORS && computer == ROCK)
    {
        cout << "Rock smashes Scissors. I win :)" << endl;
    }
    else if(user == SCISSORS && computer == PAPER)
    {
        cout << "Scissors cut Paper. You win :(" << endl;
    }
    else
    {
        cout << "TIE GAME!" << endl;
    }


    return 0;
}
