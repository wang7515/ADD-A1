#include "Player.h"

class Referee {
public:
    Referee();
    int compare(char move1, char move2);
    Player * refGame(Player * player1, Player * player2);
};