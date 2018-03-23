#include "World.h"
class EnemyTank : public Tank
{public:
  int tank1X,tank1Y,tank2X,tank2Y,tank3X,tank3Y,tank4X,tank4Y;
  int direct;
  void Position();
  void Logic();
  void Setup();
};
