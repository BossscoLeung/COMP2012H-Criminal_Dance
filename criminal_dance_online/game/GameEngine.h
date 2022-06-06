/*********************************
/* This is the Game Engine for operating the game.
/* Game will be constructed through this class.
/* It store the number of players in this match, and the current player and round.
/* Creating a unique random deck just for this match, and then distrubuting 4 cards to each player.
/* Providing the match infomations of the game.
/*********************************/
#ifndef GAMEENGINE_H
#define GAMEENGINE_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>

#include <QString>
#include <QDebug>

#include "Player.h"

using namespace std;

class GameEngine {
public:
    // constructor
    GameEngine(QStringList name_list);
    // destructor for deallocate the new Player type
    ~GameEngine();

    // Builds game
    vector<int> set_deck();
    void distribute_cards();
    void find_first_player();

    // game run function until the end of game
    void run();
    void nextRound();
    void prevPlayer();
    void nextPlayer();

    // accessor
    const int get_number_of_players() const;
    Player *getCurrentPlayer() const;
    QString getCurrentPlayerName() const;
    int getCurrentPlayerNumCards() const;
    Card::Type getCurrentPlayerHand(const int& index) const;
    
    // Print functions
    void print_all_player_status() const;
    
    enum class GameOption {
        CHOOSE_CARD = 1,
        QUIT = 2
    };

private:
    // number of players in this match
    const int number_of_players;
    // which player need to use card
    Player* current_player;
    // the deck in this match, will become empty after distrubuting the card to players
    vector<int> deck;
    // currently is what round 
    int round;
};

#endif //GAMEENGINE_H
