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
char UserPick(int us_option)
{
    char res;
    // user's pick
    char n;     // In case of invalid option
    cout << "Welcome to Rock - Paper - Scissors. Let's pick your choice..." << endl;
    cout << "1 - Rock\n2 - Paper\n3 - Scissors\n";
    cout << "Let's pick your option: ";

    cin >> us_option;
    if(us_option == 1)
    {
        res = ROCK;
        cout << "You pick ROCK!\n";
    }
    else if(us_option == 2)
    {
        res = PAPER;
        cout << "You pick PAPER!\n";
    }
    else if(us_option == 3)
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
            UserPick(us_option);
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
char ComputerPick(int comp_pick)
{
    char res;
    cout << "*******************************************" << endl;
    cout << "Give me a while for my turn..." << endl;
    sleep(2);
    // Pick a random option
    comp_pick = rand() % 3 + 1;     // Possible outcomes: 1 || 2 || 3


    if(comp_pick == 1)
    {
        res = ROCK;
        cout << "Okay. I pick ROCK!" << endl;
    }
    if(comp_pick == 2)
    {
        res = PAPER;
        cout << "Okay. I pick PAPER!" << endl;
    }
    if(comp_pick == 3)
    {
        res = SCISSORS;
        cout << "Okay. I pick SCISSORS!" << endl;
    }

    return res;

}


int main()
{
    int u, c;

    char us = UserPick(u);
    char com = ComputerPick(c);

    cout << "Then, the result is..." << endl;
    sleep(2);

    if(us == ROCK && com == PAPER)
    {
        cout << "I win. Paper wraps Rock!" << endl;
    }
    else if(us == ROCK && com == SCISSORS)
    {
        cout << "You win. Rock smashes Scissors" << endl;
    }
    else if(us == PAPER && com == ROCK)
    {
        cout << "You win. Paper wraps Rock" << endl;
    }
    else if(us == PAPER && com == SCISSORS)
    {
        cout << "I win. Scissors cut Paper" << endl;
    }
    else if(us == SCISSORS && com == ROCK)
    {
        cout << "I win. Rock smashes Scissors" << endl;
    }
    else if(us == SCISSORS && com == PAPER)
    {
        cout << "You win. Scissors cut Paper" << endl;
    }
    else
    {
        cout << "TIE GAME" << endl;
    }


    return 0;
}
