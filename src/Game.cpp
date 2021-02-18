#include "Game.h"
class Piece;
ChessBattleRoyale::Game::Game()
{
  ZoneLowerX = 0;
  ZoneLowerY = 8;
  ZoneUpperX = 8;
  ZoneUpperY = 0;
  TurnCounter = 1;
}

ChessBattleRoyale::Game::~Game()
{
}
ChessBattleRoyale::Piece *ChessBattleRoyale::Game::isEmptyTile(int x,int y)
{
  if(ChessBoard[x][y]!=NULL)
  {
    return ChessBoard[x][y];
  }
  return NULL;
}
using namespace ChessBattleRoyale;
void ChessBattleRoyale::Game::AddPlayer(Player *playertoadd,Piece *piecetobeadded,/*piece arguments*/whoami piece_type, piece_color newpiece_color)
{
  switch(piece_type)
  {
    case Rook:
    break;
  }
}
