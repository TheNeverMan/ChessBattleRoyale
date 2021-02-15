#include "Pawn.h"
#include<iostream>
using namespace std;

ChessBattleRoyale::Pawn::Pawn(int xx,int yy,piece_color color,Player *playerr)
:Piece(xx,yy,color,playerr)
{
}

ChessBattleRoyale::Pawn::~Pawn()
{
}
int *ChessBattleRoyale::Pawn::GetMoves()
{
    cout << "do nothing now" << endl;
}
