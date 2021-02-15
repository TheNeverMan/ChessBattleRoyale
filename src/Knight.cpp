#include "Knight.h"
#include<iostream>
using namespace std;

ChessBattleRoyale::Knight::Knight(int xx,int yy,piece_color color,Player *playerr)
:Piece(xx,yy,color,playerr)
{
}

ChessBattleRoyale::Knight::~Knight()
{
}
int *ChessBattleRoyale::Knight::GetMoves()
{
    cout << "do nothing now" << endl;
}
