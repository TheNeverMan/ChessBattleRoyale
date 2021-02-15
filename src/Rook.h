#ifndef ROOK_H
#define ROOK_H
#include "Piece.h"
#include "Player.h"
//playable piece rook
namespace ChessBattleRoyale
{

class Rook : public Piece
{
public:
    Rook(int xx,int yy,piece_color color,Player *playerr);
    ~Rook();
    int *GetMoves();

};

}

#endif // ROOK_H
