#include <iostream>
#include <algorithm>
using namespace std;

/**************************
-=ROCK, PAPER, SCISSORS=-
**************************/

vector <string> rps_game;

void initialize_choices()
{
    rps_game.push_back("Rock");
    rps_game.push_back("Paper");
    rps_game.push_back("Scissors");
}

int main()
{

initialize_choices();

cout << "-=ROCK, PAPER, SCISSORS=-" << endl << endl;
cout << "Player chooses 1 out of 3 options.\n1 ==> Rock\n2 ==> Paper\n3 ==> Scissors" << endl << endl;

string player;
string msg;
int i = 0;

char players_choice;


while(cin >> players_choice)
{
    switch(players_choice)
{
case '1':
    msg = "You chose ==> ";
    player = "Rock";
    break;
case '2':
    msg = "You chose ==> ";
    player = "Paper";
    break;
case '3':
    msg = "You chose ==> ";
    player = "Scissors";
    break;
default:
    cout << "Invalid character. Please, try again." << endl;
	return 0;
}
    cout << msg << player << endl;


    //Display computer's choice

        if (i >= 3) i = 0;
        cout << "Computer chose ==> " << rps_game[i] << endl;



    //RESULTS

    //DRAW
    if (player == "Rock" && rps_game[i] == "Rock")
        cout << "It is a Draw!" << endl << endl;
    else if (player == "Paper" && rps_game[i] == "Paper")
        cout << "It is a Draw!" << endl << endl;
    else if (player == "Scissors" && rps_game[i] == "Scissors")
        cout << "It is a Draw!" << endl << endl;


    //YOU WIN
    else if (player == "Rock" && rps_game[i] == "Scissors")
        cout << "You Win!" << endl << endl;
    else if (player == "Paper" && rps_game[i] == "Rock")
        cout << "You Win!" << endl << endl;
    else if (player == "Scissors" && rps_game[i] == "Paper")
        cout << "You Win!" << endl << endl;

     //COMPUTER WINS
    else if (player == "Rock" && rps_game[i] == "Paper")
        cout << "Computer Wins!" << endl << endl;
    else if (player == "Paper" && rps_game[i] == "Scissors")
        cout << "Computer Wins!" << endl << endl;
    else if (player == "Scissors" && rps_game[i] == "Rock")
        cout << "Computer Wins!" << endl << endl;

     ++i; // the next value in vector

}
return 0;
}