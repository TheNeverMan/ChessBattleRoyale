#ifndef GAME_H
#define GAME_H
#include<map>
#include "Player.h"
#include "Piece.h"
#include "ChessMap.h"
#include "Gamemode.h"
using namespace std;
//instance of this class is created by frontend from gamemaker and this class coordinates entire game, with players and stuff
namespace ChessBattleRoyale
{
class Player;
class Piece;
class Game
{
private:
  map <Player*,Piece*> PlayersMap; // player management
  Gamemode *gamemode;
  ChessMap *chessmap; //used map in game
  Piece *ChessBoard [8][8]; //of course arrays start at 0
  void LoadMap();
  int RookDefX;
  int RookDefY;
  int KnightDefX;
  int KnightDefY;
  int BishopDefX;
  int BishopDefY;
  int ZoneUpperX;
  int ZoneUpperY;
  int ZoneLowerX;
  int ZoneLowerY;
  int TurnCounter;
public:
    Piece *isEmptyTile(int x,int y);
    void TakeTurn();
    void DeletePlayer(Player * playertoremove);
    bool isInZone(int x, int y);
    void AddPlayer(Player *playertoadd,Piece *piecetobeadded); //should load automaticly to start pos
    Game();
    ~Game();

};

}

#endif // GAME_H
