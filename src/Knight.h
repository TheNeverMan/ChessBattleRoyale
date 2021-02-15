#ifndef KNIGHT_H
#define KNIGHT_H
#include "Piece.h"
#include "Player.h"
//playable piece with knight moves

namespace ChessBattleRoyale
{

class Knight : public Piece
{
public:
    Knight(int xx,int yy,piece_color color,Player *playerr);
    ~Knight();
    int *GetMoves();

};

}

#endif // KNIGHT_H
