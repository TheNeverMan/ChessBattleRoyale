#include "Player.h"
#include "Game.h"
class Game;
ChessBattleRoyale::Player::Player(Game *gametobeaddedinto,Piece *mynewpiece)
{
  gameiamin = gametobeaddedinto;
  mypiece = mynewpiece;
}

ChessBattleRoyale::Player::~Player()
{
}
