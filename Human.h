#include "Player.h"
class Human : public Player {
 protected:
  std::string name;

 public:
  Human(std::string name);
  Human();
  char makeMove();
  std::string getName();
};
