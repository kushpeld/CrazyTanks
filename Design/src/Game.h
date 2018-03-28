#include "World.h"
using namespace std;
enum Direction { STOP = 0, LEFT, RIGHT, UP, DOWN };
bool GameOver=false;
class Game
{public:
  bool GameOver=false;
  bool Victory=false;
  int hour;
  int minute;
  int second;
  void Status();
  void Time();
  void StartMenu();
};
