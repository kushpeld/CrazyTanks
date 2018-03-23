#include "World.h"
class Tank
{public:
  int Ypos;
  int Xpos;

  bool alive();
  int health;
  void Damage();
  void Fire();
  void Position(int Xpos,int Ypos);
};
