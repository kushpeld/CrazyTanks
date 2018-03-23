#include "EnemyTank.h"
EnemyTank enemy;
void EnemyTank::Setup()
{
  tank1X=rand() % width;//рандомное расположение танка на оси Х
    tank1Y=rand() % (height-6);//рандомное расположение танка на оси Y
    tank2X=rand() % width;
    tank2Y=rand() % (height-6);
    tank3X=rand() % width;
    tank3Y=rand() % (height-6);
    tank4X=rand() % width;
    tank4Y=rand() % (height-6);
}
void EnemyTank::Position()
{
  if(i==tank1Y && j==tank1X )
  Map[i][j]='+';
   if(i==tank1Y && j==tank1X-1 )
   Map[i][j]='#';
    if(i==tank1Y && j==tank1X+1 )
    Map[i][j]='#';
     if(i==tank1Y-1 && j==tank1X )
     Map[i][j]='|';
      if(i==tank1Y+1 && j==tank1X )
      Map[i][j]='#';
      if(i==tank1Y-1 && j==tank1X-1 )
      Map[i][j]='#';
       if(i==tank1Y+1 && j==tank1X+1 )
       Map[i][j]='#';
        if(i==tank1Y-1 && j==tank1X+1 )
        Map[i][j]='#';
         if(i==tank1Y+1 && j==tank1X-1)
         Map[i][j]='#';
if(i==tank2Y && j==tank2X-1 )//расположение вражеского танка2
Map[i][j]='-';
if(i==tank2Y && j==tank2X )
Map[i][j]='+';
  if(i==tank2Y && j==tank2X+1 )
  Map[i][j]='#';
  if(i==tank2Y-1 && j==tank2X )
  Map[i][j]='#';
   if(i==tank2Y+1 && j==tank2X )
   Map[i][j]='#';
   if(i==tank2Y-1 && j==tank2X-1 )
   Map[i][j]='#';
     if(i==tank2Y+1 && j==tank2X+1 )
     Map[i][j]='#';
     if(i==tank2Y-1 && j==tank2X+1 )
     Map[i][j]='#';
      if(i==tank2Y+1 && j==tank2X-1 )
      Map[i][j]='#';

if(i==tank3Y && j==tank3X-1 )//расположение вражеского танка3
Map[i][j]='#';
if(i==tank3Y && j==tank3X )
Map[i][j]='+';
  if(i==tank3Y && j==tank3X+1 )
  Map[i][j]='-';
   if(i==tank3Y-1 && j==tank3X )
   Map[i][j]='#';
    if(i==tank3Y+1 && j==tank3X )
    Map[i][j]='#';
    if(i==tank3Y-1 && j==tank3X-1 )
    Map[i][j]='#';
      if(i==tank3Y+1 && j==tank3X+1 )
      Map[i][j]='#';
       if(i==tank3Y-1 && j==tank3X+1 )
       Map[i][j]='#';
        if(i==tank3Y+1 && j==tank3X-1 )
        Map[i][j]='#';
if(i==tank4Y && j==tank4X-1 )//расположение вражеского танка4
Map[i][j]='#';
if(i==tank4Y && j==tank4X )
Map[i][j]='+';
 if(i==tank4Y && j==tank4X+1 )
 Map[i][j]='#';
    if(i==tank4Y-1 && j==tank4X )
    Map[i][j]='#';
     if(i==tank4Y+1 && j==tank4X )
     Map[i][j]='|';
     if(i==tank4Y-1 && j==tank4X-1 )
     Map[i][j]='#';
       if(i==tank4Y+1 && j==tank4X+1 )
       Map[i][j]='#';
          if(i==tank4Y-1 && j==tank4X+1 )
          Map[i][j]='#';
           if(i==tank4Y+1 && j==tank4X-1 )
           Map[i][j]='#';}}

}
void EnemyTank::Logic()
{direct=rand()%5;
  switch(direct)//движение вражеских танков , моих и вражеских пуль
  {
    case 1:
        if(tank1X!=-3)tank1X--;
        if(tank2X!=-3)tank2X++;
        if(tank3X!=-3)tank3Y++;
        if(tank4X!=-3)tank4Y--;
        break;
    case 2:
        if(tank1X!=-3)tank1Y++;
        if(tank2X!=-3)tank2Y--;
        if(tank3X!=-3)tank3X++;
        if(tank4X!=-3)tank4X--;
        break;
    case 3:
         if(tank1X!=-3)tank1X++;
         if(tank2X!=-3)tank2X--;
         if(tank3X!=-3)tank3Y--;
         if(tank4X!=-3)tank4Y++;
        break;
    case 4:
      if(tank1X!=-3)
      tank1Y--;
      if(tank2X!=-3)
      tank2Y++;
      if(tank3X!=-3)
      tank3X--;
      if(tank4X!=-3)
      tank4X++;
        break;
  }
  if((tank1X+1)>=world.width)//столкновление  танка1 со стеной
  tank1X=world.width-3;
  else if((tank1X-1)==0)
   tank1X=3;
   else if((tank1X)==0)
    tank1X=1;
    else if((tank1Y+1)>=world.height)
     tank1Y=world.height-2;
       else if((tank1Y-1)==0)
         tank1Y=2;
         else if(tank1Y==0)
           tank1Y=3;
  if((tank2X+1)>=world.width)//столкновление  танка2 со стеной
  tank2X=world.width-3;
    else if((tank2X-1)==0)
       tank2X=3;
       else if((tank2X)==0)
        tank2X=1;
        else if((tank2Y+1)>=world.height)
          tank2Y=world.height-2;
          else if((tank2Y-1)==0)
            tank2Y=2;
            else if(tank2Y==0)
              tank2Y=1;
       if((tank3X+1)>=world.width)//столкновление  танка3 со стеной
         tank3X=world.width-3;
         else if((tank3X)==0)
          tank3X=1;
          else if((tank3X-1)==0)
              tank3X=3;
              else if((tank3Y+1)>=world.height)
                tank3Y=world.height-2;
                else if((tank3Y-1)==0)
                    tank3Y=2;
                    else if(tank3Y==0)
                      tank3Y=1;
          if((tank4X+1)>=world.width)//столкновление  танка4 со стеной
           tank4X=world.width-3;
             else if((tank4X-1)==0)
                tank4X=3;
                else if((tank4X)==0)
                 tank4X=1;
                 else if((tank4Y+1)>=world.height)
                   tank4Y=world.height-2;
                   else if((tank4Y-1)==0)
                     tank4Y=2;
                     else if(tank4Y==0)
                       tank4Y=1;
}
