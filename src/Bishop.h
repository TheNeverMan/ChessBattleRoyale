#ifndef BISHOP_H
#define BISHOP_H
#include "Piece.h"
#include "Player.h"
//class for bishop piece with his moves

namespace ChessBattleRoyale
{

class Bishop : public Piece
{
public:
    Bishop(int xx,int yy,piece_color color,Player *playerr);
    ~Bishop();
    int *GetMoves();

};

}

#endif // BISHOP_H
