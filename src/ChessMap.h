#ifndef CHESSMAP_H
#define CHESSMAP_H
//for better managing of maps
namespace ChessBattleRoyale
{

class ChessMap
{
private:
  int TemplateMap [8][8]; // this will use 0 as empty tile, 1 as standard obstacle, 2 as breakable king, 3 as queen, 4 as rook start pos
  //5 as knight start pos and 6 as bishop
public:
    ChessMap();
    ~ChessMap();
    int *GetMap();

};

}

#endif // MAP_H
