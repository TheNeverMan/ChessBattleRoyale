#include "King.h"
#include<iostream>
using namespace std;
ChessBattleRoyale::King::King(int xx,int yy,piece_color color,Player *playerr)
:Piece(xx,yy,color,playerr)
{
}

ChessBattleRoyale::King::~King()
{
}
int *ChessBattleRoyale::King::GetMoves()
{
    cout << "do nothing now" << endl;
}
