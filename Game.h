#ifndef GAME_H
#define GAME_H
#include <string>

class User;  // Forward declaration

class WordGame {
protected:
    User* player;  // Only a pointer, not the full object

public:
    WordGame(User* user) : player(user) {}
    virtual void play() = 0;    // At least one virtual function to make it abstract
};

#endif
