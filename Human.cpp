#include "Human.h"
Human::Human(std::string name) : name(name) {}
Human::Human():Human("Human"){}

char Human::makeMove() {
    char move;
    std::cout << "Enter move: ";
    std::cin >> move;

    while (move != 'R' && move != 'P' && move != 'S') {
        std::cout << "Invalid move. Enter R, P, or S: ";
        std::cin >> move;
    }
    return move;
}

std::string Human::getName() {
    return name;
}