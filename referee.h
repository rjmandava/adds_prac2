#ifndef REFEREE_H
#define REFEREE_H
#include "computer.h"
#include "human.h"

class Referee
{
public:
    Referee(); //constructor
    char refGame(Human p1, Computer p2);
    // returns the outcome for player1:  'W', 'L' or 'T' (Win, Lose, Tie)
};

#endif
