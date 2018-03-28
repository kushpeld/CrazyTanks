#include "Game.h"
int main()
{
 Game *game=new Game();
 game->StartMenu();
 game->Time();
 game->Status();
 delete (game);
  return 0;
}
