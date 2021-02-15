#include "Rook.h"
#include<iostream>
using namespace std;

ChessBattleRoyale::Rook::Rook(int xx,int yy,piece_color color,Player *playerr)
:Piece(xx,yy,color,playerr)
{
}

ChessBattleRoyale::Rook::~Rook()
{
}
int * ChessBattleRoyale::Rook::GetMoves()
{
    cout << "do nothing now" << endl;
}
