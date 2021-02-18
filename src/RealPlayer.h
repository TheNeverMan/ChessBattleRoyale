#ifndef REALPLAYER_H
#define REALPLAYER_H
#include "Player.h"
//this class uses GTK frontend to comunnicate with real players (not network) for moves
namespace ChessBattleRoyale
{

class RealPlayer : public Player
{
public:
    RealPlayer(Game *gametobeaddedinto,Piece *mynewpiece);
    ~RealPlayer();

};

}

#endif // REALPLAYER_H
