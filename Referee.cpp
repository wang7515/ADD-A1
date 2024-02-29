#include "Referee.h"
int compare(char move1, char move2) {
  if (move1 == move2) {
    return 0;
  } else if ((move1 == 'R' && move2 == 'S') || (move1 == 'S' && move2 == 'P') ||
             (move1 == 'P' && move2 == 'R')) {
    return 1;
  } else {
    return 2;
  }
}
Player* Referee::refGame(Player* player1, Player* player2) {
  char player1_move = player1->makeMove();
  char player2_move = player2->makeMove();

  int result = compare(player1_move, player2_move);

  if (result == 0) {
    return nullptr;
    //std::cout << "It's a Tie.\n";
  } else if (result == 1) {
    return player1;
    //std::cout << player1->getName() << " Wins\n";
  } else if (result == 2) {
    return player2;
    //std::cout << player2->getName() << " Wins\n";
  }
};