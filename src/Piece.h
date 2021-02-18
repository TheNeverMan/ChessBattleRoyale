#ifndef PIECE_H
#define PIECE_H
#include "Player.h"
#include "Game.h"
#include "PieceEnums.h"
//generic piece with isindesctructible bool, and eliminated() adn stuff

namespace ChessBattleRoyale
{
  class Player;
  class Piece;
  class Game;
class Piece
{
private:
    int x;
    int y;
    bool isindestructible;
    bool waslastturninzone;
    Player* player;
    piece_color Piece_Color;
    whoami PieceType;
public:
    Piece(int xx,int yy, piece_color color, Player *playerr);
    ~Piece();
    virtual int* GetMoves()=0; //returns pointer to static int array of moves
    bool Move(int x,int y, Game *gameiamin);
    void Eliminated();
    int GetX();
    int GetY();
    piece_color GetColor();
    whoami Whoami();
};

}

#endif // PIECE_H
