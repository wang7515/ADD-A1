#include "Computer.h"
Computer::Computer():name("Computer"){}
char Computer::makeMove() {
    char move = 'R';
    return move;
}

std::string Computer::getName() {
    return name;
}