#include "Queen.h"
#include<iostream>
using namespace std;

ChessBattleRoyale::Queen::Queen(int xx,int yy,piece_color color,Player *playerr)
:Piece(xx,yy,color,playerr)
{
}

ChessBattleRoyale::Queen::~Queen()
{
}
int * ChessBattleRoyale::Queen::GetMoves()
{
    cout << "do nothing now" << endl;
}
