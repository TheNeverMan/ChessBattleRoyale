#ifndef KING_H
#define KING_H
#include "Piece.h"
#include "Player.h"
//Moves like king in chess used for border marking

namespace ChessBattleRoyale
{

class King : public Piece
{
public:
    King(int xx,int yy,piece_color color,Player *playerr);
    ~King();
    int *GetMoves();

};

}

#endif // KING_H
