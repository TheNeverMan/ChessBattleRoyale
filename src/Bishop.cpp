#include "Bishop.h"
#include<iostream>
using namespace std;

ChessBattleRoyale::Bishop::Bishop(int xx,int yy,piece_color color,Player *playerr)
:Piece(xx,yy,color,playerr)
{
}

ChessBattleRoyale::Bishop::~Bishop()
{
}
int *ChessBattleRoyale::Bishop::GetMoves()
{
    cout << "do nothing now" << endl;
}
