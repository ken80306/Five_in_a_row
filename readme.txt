

遊戲通用主架構 (底層 -> 頂層)
  Game: Base virtual class
    Movement: class 
  Strategy_tree:
    Tree_node_me_round: class
      {Game*, Movement last_move, Tree_node_you_round* next_movement}
    Tree_node_you_round: class
      {Game*, Movement last_move, vector<Tree_node_me_round> feasible_movement}
    static Minmax_me_round
    static Minmax_you_round 
  Game_simulator
    template<Game>
  int main()
  
  五子棋
  class Five_in_a_row : public Game
  15*15 預設電腦先下
    
  線上平台
  http://tw.gamelet.com/game.do?code=fiveChess