#include <iostream>
#include "Referee.h"
#include "Human.h"
#include "Computer.h"

int main() {
    
    Human humanPlayer("Mei");
    Computer computerPlayer;

    Referee gameReferee;

    bool keepPlaying = true;
    char playAgain;

        Player* winner = gameReferee.refGame(&humanPlayer, &computerPlayer);

        if (winner != nullptr) {
            std::cout << winner->getName() << " Wins\n";
        } else {
            std::cout << "It's a Tie.\n";
        }

    return 0;
}
