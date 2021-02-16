#include "ChessMap.h"

ChessBattleRoyale::ChessMap::ChessMap()
{
  //here will be initializtaion of maps in child of this class
}

ChessBattleRoyale::ChessMap::~ChessMap()
{
}
int *ChessBattleRoyale::ChessMap::GetMap()
{
  int *out = new int [8][8];
  int i = 0;
  int a = 0;
  while(i != 8)
  {
    while(a != 8)
    {
      *out [i][a] = TemplateMap [i][a];
      a = a + 1;
    }
    i = i + 1;
  }
  return out;//needs delete somewhere
}
