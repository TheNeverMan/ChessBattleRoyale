#ifndef PLAYER_H
#define PLAYER_H
#include<string>
#include "Game.h"
#include "Piece.h"
using namespace std;
//generic player with virtual stuff
namespace ChessBattleRoyale
{
class Game;
class Piece;
class Player
{
private:
  string Name;
  Piece *mypiece;
  Game *gameiamin;
public:
    Player(Game *gametobeaddedinto,Piece *mynewpiece);
    ~Player();

};

}

#endif // PLAYER_H
