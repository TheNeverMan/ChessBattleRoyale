#ifndef QUEEN_H
#define QUEEN_H
#include "Piece.h"
#include "Player.h"
//idk may be used in some gamemodes

namespace ChessBattleRoyale
{

class Queen : public Piece
{
public:
    Queen(int xx,int yy,piece_color color,Player *playerr);
    ~Queen();
    int *GetMoves();

};

}

#endif // QUEEN_H
