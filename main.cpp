#include"Human.h"
#include"Computer.h"
#include"Referee.h"
#include <iostream>

using namespace std;

int main(){
   
    Human player1;
    Computer player2;
    Referee ref;

    cout << ref.refGame(player1, player2) << endl;
}
