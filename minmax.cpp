#include "minmax.h"

minmax::minmax(int depth_in = 100) 
  :detph(depth_in) { 
    if (depth_in < 0 ) {
      set_depth(100)
    }
}
void minmax::set_depth(int depth_in) {
  if (depth_in > 0) {
    depth = depth_in;
  }
}  
minmax::Game_value minmax::operator() (Game game) {
  if (game.is_terminal() || depth == 0) {
    return game.get_value();  
  }
  if (game.whose_play() == Game::Player::Adversary) {
    Game::Game_value alpha{};
    alpah.infinite();
    for (Game child : game.children()) {
      alpah = min(alpha, minmax(child));
    }
  }else{
    alpha.neg_infinite();
    for (Game Child : game.children()) {
      alpha = max(alpha, minmax(child));
    }
  }
  return alpha;
}

/*
function minimax(node, depth)
    if node is a terminal node or depth = 0
        return the heuristic value of node
    if the adversary is to play at node
        let α := +∞
        foreach child of node
            α := min(α, minimax(child, depth-1))
    else {we are to play at node}
        let α := -∞
        foreach child of node
            α := max(α, minimax(child, depth-1))
    return α
*/