#include<vector>
class Game {
public:
  class Game_value
  {
    float value;
    public:
      Game_value (): value(0.0) {};
      void infinite () {value = 10000.0;}
      void neg_infinite () {value = -10000.0}
  }
  enum class Player {We, Adversary} ;
  
  bool is_terminal();
  Game_value get_value();
  std::vector<Game> children();
}
