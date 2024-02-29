#include <string.h>
class Player {
public:
    virtual char makeMove() = 0;
    virtual std::string getName() = 0;
    virtual ~Player() {}
};