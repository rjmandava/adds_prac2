#include "Referee.h"
#include "Computer.h"
#include "Human.h"
#include <iostream>

Referee:: Referee(){};

char Referee::refGame(Human p1, Computer p2){
    char playermove = p1.makeMove();
    char computermove = p2.makeMove();

    if(playermove == 'R' && computermove == 'S'){
        return 'W';
    }else if(playermove == 'R' && computermove == 'P'){
        return 'L';
    }else if(playermove == 'S' && computermove == 'P'){
        return 'W';
    }else if(playermove == 'S' && computermove == 'R'){
        return 'L';
    }else if(playermove == 'P' && computermove == 'R'){
        return 'W';
    }else if(playermove == 'P' && computermove == 'S'){
        return 'L';
    }
    else {
        return 'T';
    }
}
