#include "game.h"
// usage : minmax a(50);
// usage : minmax(five_in_a_row_game);

template <class Game>
class minmax(Game game) {
  int depth;
  
public:
  minmax(int depth_in = 100) :detph(depth_in);
  void set_depth(int depth_in);
  void operator() (Game game);
}


