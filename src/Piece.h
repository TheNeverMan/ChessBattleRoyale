#ifndef PIECE_H
#define PIECE_H
#include "Player.h"
//generic piece with isindesctructible bool, and eliminated() adn stuff

namespace ChessBattleRoyale
{
  enum piece_color
  {
    white,black
  };
  class Player;
class Piece
{
private:
    int x;
    int y;
    bool isindestructible;
    bool waslastturninzone;
    Player* player;
    piece_color Piece_Color;
public:
    Piece(int xx,int yy, piece_color color, Player *playerr);
    ~Piece();
    virtual int* GetMoves()=0; //returns pointer to static int array of moves
    bool Move(int x,int y);
    void Eliminated();
    int GetX();
    int GetY();
    piece_color GetColor();
};

}

#endif // PIECE_H
