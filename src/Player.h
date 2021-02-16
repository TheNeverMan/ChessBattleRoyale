#ifndef PLAYER_H
#define PLAYER_H
#include<string>
#include "Game.h"
using namespace std;
//generic player with virtual stuff
namespace ChessBattleRoyale
{
class Game;
class Player
{
private:
  string Name;
  Game *gameiamin;
public:
    Player();
    ~Player();

};

}

#endif // PLAYER_H
