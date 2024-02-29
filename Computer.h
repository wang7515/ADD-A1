#include "Player.h"

class Computer : public Player {
 protected:
  std::string name;

 public:
  Computer();
  char makeMove();
  std::string getName();
};
