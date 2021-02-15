#include "Piece.h"
#include<iostream>
using namespace std;

ChessBattleRoyale::Piece::Piece(int xx,int yy,piece_color color,Player *playerr)
{
    x=xx;
    y=yy;
    Color=color;
    player=playerr;
}

ChessBattleRoyale::Piece::~Piece()
{
}
int *ChessBattleRoyale::Piece::GetMoves()
{
    cout << "do nothing now" << endl;
}
bool ChessBattleRoyale::Piece::Move(int x,int y)
{
    //check if it is same tile
    int acX = GetX();
    int acY = GetY();
    if(acX==x && acY==y)
    {
        return false;
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