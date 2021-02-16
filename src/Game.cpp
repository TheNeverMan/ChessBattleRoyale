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
void ChessBattleRoyale::Game::AddPlayer(Player *playertoadd,Piece *piecetobeadded)
{

}
