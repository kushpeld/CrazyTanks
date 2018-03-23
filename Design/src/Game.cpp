#include "Game.h"
void Game::Time()
{
  int secd=sec/8;
  cout<<"\t\tTIME: "<<hour<<":";//вывод времени
  cout<<min<<":";
  cout<<secd<<endl;
  if(sec<480)
  {sec++;}
  else if(sec==480 && min<60)
  {
    sec=1;
    min++;
  }
  else if(sec==480 && min==60 && hour<24)
  {
    sec=1;min=1;hour++;
  }
}
void Game::Status()
{srand( time( 0 ) );
  world.Setup();
  cout<<endl;
  cout<<endl;
  cout<<"Key 'g'= GameOver"<<endl;;
  cout<<"\tScore: "<<score;//вывод очков за убийство вражеского танка
  cout<<"\t\tLives: "<<Lives;//вывод количество жизней танка
  while(!GameOver==!Victory)
  {
    world.BuildMap();
    world.Input();
    world.DataMap();
    }
if(mytank.Lives==0){//если я умер = Конец игры
GameOver=true;
cout<<"\t\t\t\tGameOver!"<<endl;}
if( enemy.tank1X<=-3 && enemy.tank2X<=-3 && enemy.tank3X<=-3 && enemy.tank4X<=-3)//если все танки уничтожены = Победа
{Victory=true;
 cout<<"\t\t\t\tVictory!"<<endl;
}
system("pause");
}
