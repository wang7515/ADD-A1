#include "Player.h"
class Human : public Player {
 protected:
  std::string name;

 public:
  Human();
  Human(std::string name);
  char makeMove();
  std::string getName();
};