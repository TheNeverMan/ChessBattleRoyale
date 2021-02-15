#ifndef PIECE_H
#define PIECE_H
#include "Player.h"
//generic piece with isindesctructible bool, and eliminated() adn stuff
enum piece_color
{
  white,black
};
namespace ChessBattleRoyale
{

class Piece
{
private:
    int x;
    int y;
    bool isindestructible;
    bool waslastturninzone;
    Player* player;
    piece_color Color;
public:
    Piece(int xx,int yy, piece_color color, Player *playerr);
    ~Piece();
    virtual int* GetMoves()=0; //returns pointer to static int array of moves
    bool Move(int x,int y);
    void Eliminated();
    int GetX();
    int GetY();
};

}

#endif // PIECE_H
