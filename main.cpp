#include "board.h"
#include "game.h"
#include "minmax.h"

#include <iostream>

int main()
{

  Game game<>{};
  game.build_strategy_tree();
  std::ofstream strategy_file{"strategy_file.bin"};
  game.save_strategy_tree(strategy_file);
  return 0;
}