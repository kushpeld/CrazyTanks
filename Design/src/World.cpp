#include "World.h"
World world;
void World::Setup()
{
  mytank.Setup();
  enemy.Setup();
  wall.Position();
}
void World::BuildMap()
{
  string Map[35]={
 "##############################################################################",
 "#                                                                            #",
 "#                                                                            #",
 "#                                                                            #",
 "#                                                                            #",
 "#                                                                            #",
 "#                                                                            #",
 "#                                                                            #",
 "#                                                                            #",
 "#                                                                            #",
 "#                                                                            #",
 "#                                                                            #",
 "#                                                                            #",
 "#                                                                            #",
 "#                                                                            #",
 "#                                                                            #",
 "#                                                                            #",
 "#                                                                            #",
 "#                                                                            #",
 "#                                                                            #",
 "#                                                                            #",
 "#                                                                            #",
 "#                                                                            #",
 "#                                                                            #",
 "#                                                                            #",
 "#                                                                            #",
 "#                                                                            #",
 "#                                                                            #",
 "#                                                                            #",
 "#                                                                            #",
 "#                                                                            #",
 "#                                                                            #",
 "##############################################################################"};
 system("cls");
 mytank.Position();
 wall.BuildWall();
 for(int i=0;i<height;i++)
 {
  for(int j=0;j<width;j++)
  { if(i==GoldY && j==GoldX)
 Map[i][j]='@';

 for (int i = 0; i <35 ; i++)//создание "КАРТЫ"
 {cout<<Map[i]<<endl;}
}}}
void World::Input()
{
 mytank.Input();
}
void World::DataMap()
{mytank.Logic();
  bullet.Logic();
  enemy.Logic();

  if(bullet.b==enemy.tank1Y+1 && bullet.a==enemy.tank1X)//уничтожение танка1
{bullet.a=mytank.x;
 bullet.b=(mytank.y-2);
 mytank.score+=1;
 enemy.tank1X=-3;
 enemy.tank1Y=-3;}
    if(bullet.b==enemy.tank1Y+1 && bullet.a==enemy.tank1X-1)
    {  bullet.a=mytank.x;
    bullet.b=(mytank.y-2);
    mytank.score+=1;
    enemy.tank1X=-3;
    enemy.tank1Y=-3;
  }
      if(bullet.b==enemy.tank1Y+1 && bullet.a==enemy.tank1X+1)
      {  bullet.a=mytank.x;
      bullet.b=(mytank.y-2);
      mytank.score+=1;
      enemy.tank1X=-3;
      enemy.tank1Y=-3;}
      if(b==enemy.tank1Y+1 && a==enemy.tank1X-2)
      {  bullet.a=mytank.x;
      bullet.b=(mytank.y-2);
      mytank.score+=1;
      enemy.tank1X=-3;
      enemy.tank1Y=-3;}
      if(bullet.b==enemy.tank1Y+1 && bullet.a==enemy.tank1X+2)
      {  bullet.a=mytank.x;
      bullet.b=(mytank.y-2);
      mytank.score+=1;
      enemy.tank1X=-3;
      enemy.tank1Y=-3;
    }
if(bullet.b==enemy.tank2Y+1 && bullet.a==enemy.tank2X)//уничтожение танка2
  {bullet.a=mytank.x;
 bullet.b=(mytank.y-2);
 mytank.score+=1;
 enemy.tank2X=-3;
 enemy.tank2Y=-3;}
   if(bullet.b==enemy.tank2Y+1 && bullet.a==enemy.tank2X-1)
   { bullet.a=mytank.x;
   bullet.b=(mytank.y-2);
   mytank.score+=1;
   enemy.tank2X=-3;
   enemy.tank2Y=-3;
   enemy.tank2X--;}
     if(bullet.b==enemy.tank2Y+1 && bullet.a==enemy.tank2X+1)
     { bullet.a=mytank.x;
     bullet.b=(mytank.y-2);
     mytank.score+=1;
     enemy.tank2X=-3;
     enemy.tank2Y=-3;}
     if(bullet.b==enemy.tank2Y+1 && bullet.a==enemy.tank2X-2)
     { bullet.a=mytank.x;
     bullet.b=(mytank.y-2);
     mytank.score+=1;
     enemy.tank2X=-3;
     enemy.tank2Y=-3;}
     if(bullet.b==enemy.tank2Y+1 && bullet.a==enemy.tank2X+2)
     { bullet.a=mytank.x;
     bullet.b=(mytank.y-2);
     mytank.score+=1;
     enemy.tank2X=-3;
     enemy.tank2Y=-3;}
if(bullet.b==enemy.tank3Y+1 && bullet.a==enemy.tank3X)//уничтожение танка3
 { bullet.a=mytank.x;
  bullet.b=(mytank.y-2);
  mytank.score+=1;
  enemy.tank3X=-3;
  enemy.tank3Y=-3;}
   if(bullet.b==enemy.tank3Y+1 && bullet.a==enemy.tank3X-1)
   { bullet.a=mytank.x;
     bullet.b=(mytank.y-2);
     mytank.score+=1;
     enemy.tank3X=-3;
     enemy.tank3Y=-3;}
      if(bullet.b==enemy.tank3Y+1 && bullet.a==enemy.tank3X+1)
       { bullet.a=mytank.x;
         bullet.b=(mytank.y-2);
         mytank.score+=1;
         enemy.tank3X=-3;
         enemy.tank3Y=-3;}
         if(bullet.b==enemy.tank3Y+1 && bullet.a==enemy.tank3X-2)
          { bullet.a=mytank.x;
            bullet.b=(mytank.y-2);
            mytank.score+=1;
            enemy.tank3X=-3;
            enemy.tank3Y=-3;}
            if(bullet.b==enemy.tank3Y+1 && bullet.a==enemy.tank3X-2)
             { bullet.a=mytank.x;
               bullet.b=(mytank.y-2);
               mytank.score+=1;
               enemy.tank3X=-3;
               enemy.tank3Y=-3;}
if(bullet.b==enemy.tank4Y+1 && bullet.a==enemy.tank4X)//уничтожение танка4
{bullet.a=mytank.x;
 bullet.b=(mytank.y-2);
 mytank.score+=1;
 enemy.tank4X=-3;
 enemy.tank4Y=-3;}
   if(bullet.b==enemy.tank4Y+1 && bullet.a==enemy.tank4X-1)
    { bullet.a=mytank.x;
      bullet.b=(mytank.y-2);
      mytank.score+=1;
      enemy.tank4X=-3;
      enemy.tank4Y=-3;}
        if(b==enemy.tank4Y+1 && a==enemy.tank4X+1)
          { bullet.a=mytank.x;
           bullet.b=(mytank.y-2);
           mytank.score+=1;
           enemy.tank4X=-3;
           enemy.tank4Y=-3;}
           if(bullet.b==enemy.tank4Y+1 && bullet.a==enemy.tank4X-2)
             { bullet.a=mytank.x;
              bullet.b=(mytank.y-2);
              mytank.score+=1;
              enemy.tank4X=-3;
              enemy.tank4Y=-3;}
              if(bullet.b==enemy.tank4Y+1 && bullet.a==enemy.tank4X+2)
                { bullet.a=mytank.x;
                 bullet.b=(mytank.y-2);
                 mytank.score+=1;
                 enemy.tank4X=-3;
                 enemy.tank4Y=-3;}
if((bullet.b1==mytank.y+1 && bullet.a1==mytank.x)||(bullet.b1==mytank.y+1 && bullet.a1==mytank.x-1)||(bullet.b1==mytank.y+1 && bullet.a1==mytank.x+1))//уничтожение моего танка от пуль танка1
 { bullet.a1=enemy.tank1X;
    bullet.b1=(enemy.tank1Y-2);
    mytank.Lives-=1;}
       if((bullet.b1==mytank.y-1 && bullet.a1==mytank.x)||(bullet.b1==mytank.y-1 && bullet.a1==mytank.x-1)||(bullet.b1==mytank.y-1 && bullet.a1==mytank.x+1))
        { bullet.a1=enemy.tank1X;
          bullet.b1=(enemy.tank1Y-2);
          mytank.Lives-=1;}
          if((bullet.b1==mytank.y && bullet.a1==mytank.x-1)||(bullet.b1==mytank.y-1 && bullet.a1==mytank.x-1)||(bullet.b1==mytank.y+1 && bullet.a1==mytank.x-1))
           { bullet.a1=enemy.tank1X;
             bullet.b1=(enemy.tank1Y-2);
             mytank.Lives-=1;}
             if((bullet.b1==mytank.y && bullet.a1==mytank.x+1)||(bullet.b1==mytank.y-1 && bullet.a1==mytank.x+1)||(bullet.b1==mytank.y+1 && bullet.a1==mytank.x+1))
              { bullet.a1=enemy.tank1X;
                bullet.b1=(enemy.tank1Y-2);
                mytank.Lives-=1;}
if((bullet.b2==mytank.y+1 && bullet.a2==mytank.x)||(bullet.b2==mytank.y+1 && bullet.a2==mytank.x-1)||(bullet.b2==mytank.y+1 && bullet.a2==mytank.x+1))//уничтожение моего танка от пуль танка2
 { bullet.a2=enemy.tank2X-2;
    bullet.b2=enemy.tank2Y;
    mytank.Lives-=1;}
       if((bullet.b2==mytank.y-1 && bullet.a2==mytank.x)||(bullet.b2==mytank.y-1 && bullet.a2==mytank.x-1)||(bullet.b2==mytank.y-1 && bullet.a2==mytank.x+1))
        { bullet.a2=enemy.tank2X-2;
          bullet.b2=enemy.tank2Y;
          mytank.Lives-=1;}
          if((bullet.b2==mytank.y && bullet.a2==mytank.x-1)||(bullet.b2==mytank.y-1 && bullet.a2==mytank.x-1)||(bullet.b2==mytank.y+1 && bullet.a2==mytank.x-1))
           { bullet.a2=enemy.tank2X-2;
             bullet.b2=enemy.tank2Y;
             mytank.Lives-=1;}
             if((bullet.b2==mytank.y && bullet.a2==mytank.x+1)||(bullet.b2==mytank.y-1 && bullet.a2==mytank.x+1)||(bullet.b2==mytank.y+1 && bullet.a2==mytank.x+1))
              { bullet.a2=enemy.tank2X-2;
                bullet.b2=enemy.tank2Y;
                mytank.Lives-=1;}
if((bullet.b3==mytank.y+1 && bullet.a3==mytank.x)||(bullet.b3==mytank.y+1 && bullet.a3==mytank.x-1)||(bullet.b3==mytank.y+1 && bullet.a3==mytank.x+1))//уничтожение моего танка от пуль танка3
 { bullet.a3=enemy.tank3X+2;
    bullet.b3=enemy.tank3Y;
    mytank.Lives-=1;}
       if((bullet.b3==mytank.y-1 && bullet.a3==mytank.x)||(bullet.b3==mytank.y-1 && bullet.a3==mytank.x-1)||(bullet.b3==mytank.y-1 && bullet.a3==mytank.x+1))
        { bullet.a3=enemy.tank3X+2;
          bullet.b3=enemy.tank3Y;
          mytank.Lives-=1;}
          if((bullet.b3==mytank.y && bullet.a3==mytank.x-1)||(bullet.b3==mytank.y-1 && bullet.a3==mytank.x-1)||(bullet.b3==mytank.y+1 && bullet.a3==mytank.x-1))
           { bullet.a3=enemy.tank3X+2;
             bullet.b3=enemy.tank3Y;
             mytank.Lives-=1;}
             if((bullet.b3==mytank.y && bullet.a3==mytank.x+1)||(bullet.b3==mytank.y-1 && bullet.a3==mytank.x+1)||(bullet.b3==mytank.y+1 && bullet.a3==mytank.x+1))
              { bullet.a3=enemy.tank3X+2;
                bullet.b3=enemy.tank3Y;
                mytank.Lives-=1;}
if((bullet.b4==mytank.y+1 && bullet.a4==mytank.x)||(bullet.b4==mytank.y+1 && bullet.a4==mytank.x-1)||(bullet.b4==mytank.y+1 && bullet.a4==mytank.x+1))//уничтожение моего танка от пуль танка4
 { bullet.a4=enemy.tank4X;
    bullet.b4=(enemy.tank4Y+2);
    mytank.Lives-=1;}
       if((bullet.b4==mytank.y-1 && bullet.a4==mytank.x)||(bullet.b4==mytank.y-1 && bullet.a4==mytank.x-1)||(bullet.b4==mytank.y-1 && bullet.a4==mytank.x+1))
        { bullet.a4=enemy.tank4X;
          bullet.b4=(enemy.tank4Y+2);
          mytank.Lives-=1;}
          if((bullet.b4==mytank.y && bullet.a4==mytank.x-1)||(bullet.b4==mytank.y-1 && bullet.a4==mytank.x-1)||(bullet.b4==mytank.y+1 && bullet.a4==mytank.x-1))
           { bullet.a4=enemy.tank4X;
             bullet.b4=(enemy.tank4Y+2);
             mytank.Lives-=1;}
             if((bullet.b4==mytank.y && bullet.a4==mytank.x+1)||(bullet.b4==mytank.y-1 && bullet.a4==mytank.x+1)||(bullet.b4==mytank.y+1 && bullet.a4==mytank.x+1))
              { bullet.a4=enemy.tank4X;
                bullet.b4=(enemy.tank4Y+2);
                mytank.Lives-=1;}
}
