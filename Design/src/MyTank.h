#include "World.h"

class MyTank : public Tank
{public:
  int x,y;
  int score;
  int Lives=3
  Direction dir;
  void Logic();
  void Input();
  void Position();
  void Setup();
};
