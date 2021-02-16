#include "Piece.h"
#include<iostream>
using namespace std;

ChessBattleRoyale::Piece::Piece(int xx,int yy,piece_color color,Player *playerr)
{
    x=xx;
    y=yy;
    Piece_Color=color;
    player=playerr;
}

ChessBattleRoyale::Piece::~Piece()
{
}
int *ChessBattleRoyale::Piece::GetMoves()
{
    cout << "do nothing now" << endl;
}
bool ChessBattleRoyale::Piece::Move(int x,int y, Game *gameiamin)// dumb bugfix due to conflicting header files
{
    //check if it is same tile
    int acX = GetX();
    int acY = GetY();
    if(acX==x && acY==y)
    {
      //we dont move
        return false;
    }
    Piece standing = *gameiamin->isEmptyTile(x,y);
    if (standing == NULL)
    {

    }
}
int ChessBattleRoyale::Piece::GetY()
{
   return y;
}
int ChessBattleRoyale::Piece::GetX()
{
    return x;
}
using namespace ChessBattleRoyale;
piece_color ChessBattleRoyale::Piece::GetColor()
{
  return Piece_Color;
}
whoami ChessBattleRoyale::Piece::Whoami()
{
  return PieceType;
}
