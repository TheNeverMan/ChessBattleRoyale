#ifndef AIBOT_H
#define AIBOT_H
#include "Player.h"
//this is class for AI player, used in offline mode. Contains AI

namespace ChessBattleRoyale
{

class AIBot : public Player
{
public:
    AIBot(Game *gametobeaddedinto,Piece *mynewpiece);
    ~AIBot();

};

}

#endif // AIBOT_H
