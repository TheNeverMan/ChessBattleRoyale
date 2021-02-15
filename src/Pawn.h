#ifndef PAWN_H
#define PAWN_H
#include "Piece.h"
#include "Player.h"
//dummy piece used as obstacle

namespace ChessBattleRoyale
{

class Pawn : public Piece
{
public:
    Pawn(int xx,int yy,piece_color color,Player *playerr);
    ~Pawn();
    int *GetMoves();

};

}

#endif // PAWN_H
