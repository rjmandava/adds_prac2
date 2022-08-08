#include "human.h"
#include <iostream>
using namespace std;

Human::Human()
{
}

char Human::makeMove()
{
    char p1;
//input rock,paper or scissors initials to make move
    cout << "Enter move: \n";
    cin >> p1;
//returns the move.
    return p1;
}
