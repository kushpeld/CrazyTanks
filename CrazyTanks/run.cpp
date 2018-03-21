#include<iostream>
#include <cstdlib>
#include<conio.h>
#include<string>
#include <vector>
#include <ctime>
#include <Windows.h>
using namespace std;
bool GameOver;//Проиграл
bool Victory;//Победа
const int width=76;//ширина поля
const int height=32;//высота поля
int sec,min,hour=0;//время
int x,y,a,b,a1,b1,a2,b2,a3,b3,a4,b4,tank1X,tank1Y,tank2X,tank2Y,tank3X,tank3Y,tank4X,tank4Y,score;//координаты
enum Direction {STOP=0,LEFT,RIGHT,UP,DOWN};//направление для своего танка
Direction dir;
int direct;//Направление для вражеского танка
int Lives=3;//Жизни
void Setup()//инициализируем перемменые
{
  GameOver=false;
  Victory=false;
  dir=STOP;
  x=width/2-1;//середина ширины
  y=height-2;
 a=x;// от а будет зависит расположение моей пули на оси Х
 b=y;// от b будет зависит расположение моей пули на оси Y
  tank1X=rand() % width;//рандомное расположение танка на оси Х
  tank1Y=rand() % (height-6);//рандомное расположение танка на оси Y
  tank2X=rand() % width;
  tank2Y=rand() % (height-6);
  tank3X=rand() % width;
  tank3Y=rand() % (height-6);
  tank4X=rand() % width;
  tank4Y=rand() % (height-6);
 a1=tank1X;
 b1=tank1Y;
 a2=tank2X;
 b2=tank2Y;
 a3=tank3X;
 b3=tank3Y;
 a4=tank4X;
 b4=tank4Y;
  score = 0;
}
void BuildMap()//рисуем поле , танки и время
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
 direct=rand()%5;//в будущем для рандомного направление вражеских танков
 for(int i=0;i<height;i++)//расположение моего танка
 {
  for(int j=0;j<width;j++)
  {if(i==y && j==x+1)
    Map[i][j]='-';
    if(i==y && j==x-1)
      Map[i][j]='-';
      if(i==y-1 && j==x)
        Map[i][j]='!';
        if(i==y+1 && j==x)
          Map[i][j]='=';
          if(i==y-1 && j==x-1)
            Map[i][j]='|';
            if(i==y+1 && j==x+1)
              Map[i][j]='|';
              if(i==y-1 && j==x+1)
                Map[i][j]='|';
                if(i==y+1 && j==x-1)
                  Map[i][j]='|';
                  if(i==y && j==x)
                    Map[i][j]='*';
                   if(i==b-2 && j==a)
                    Map[i][j]='*';
    if(i==b1-2 && j==a1)//расположение вражеского танка1
    Map[i][j]='*';
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
        if(i==b2 && j==a2-2)
          Map[i][j]='*';
  if(i==tank3Y && j==tank3X-1 )//расположение вражеского танка3
  Map[i][j]='#';
  if(i==b3 && j==a3+2)
    Map[i][j]='*';
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
 if(i==b4+2 && j==a4)
   Map[i][j]='*';
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
 cout<<endl;
 cout<<endl;
 cout<<"Key 'g'= GameOver"<<endl;;
 cout<<"\tScore: "<<score;//вывод очков за убийство вражеского танка
 cout<<"\t\tLives: "<<Lives;//вывод количество жизней танка

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
 for (int i = 0; i <35 ; i++)//создание "КАРТЫ"
 {cout<<Map[i]<<endl;}
}
void Input()//нажатия клавиш для движение моего танка
{
  if(_kbhit())
  {
    switch(_getch())
    {
      case 75:
          dir=LEFT;
          break;
      case 77:
          dir=RIGHT;
          break;
      case 72:
          dir=UP;
          break;
      case 80:
          dir=DOWN;
          break;
      case 'g':
          GameOver=true;
          cout<<"\t\t\t\tGameOver!"<<endl;
          break;
    }}}
void Logic()//движение моего танка и вражеских, моих и вражеских пуль ,уничтожение танка, столкновление танка и пуль со стеной
{
  switch(dir)//движение моего танка
  {
    case LEFT:
        x--;
      break;
    case RIGHT:
      x++;
      break;
    case UP:
      y--;
      break;
    case DOWN:
      y++;
      break;

  }
  switch(direct)//движение вражеских танков , моих и вражеских пуль
  {
    case 1:
        if(tank1X!=-3)tank1X--;
        if(tank2X!=-3)tank2X++;
        if(tank3X!=-3)tank3Y++;
        if(tank4X!=-3)tank4Y--;
        b--;b1--;a3++;b4++;a2--;
        break;
    case 2:
        if(tank1X!=-3)tank1Y++;
        if(tank2X!=-3)tank2Y--;
        if(tank3X!=-3)tank3X++;
        if(tank4X!=-3)tank4X--;
        b--;b1--;a3++;b4++;a2--;
        break;
    case 3:
         if(tank1X!=-3)tank1X++;
         if(tank2X!=-3)tank2X--;
         if(tank3X!=-3)tank3Y--;
         if(tank4X!=-3)tank4Y++;
         b--;b1--;a3++;b4++;a2--;
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
    b--;b1--;a3++;b4++;a2--;
        break;
  }
   if(b==tank1Y+1 && a==tank1X)//уничтожение танка1
 {a=x;
  b=(y-2);
  score+=1;
  tank1X=-3;
  tank1Y=-3;}
     if(b==tank1Y+1 && a==tank1X-1)
     {  a=x;
     b=(y-2);
     score+=1;
     tank1X=-3;
     tank1Y=-3;
   }
       if(b==tank1Y+1 && a==tank1X+1)
       {  a=x;
       b=(y-2);
       score+=1;
       tank1X=-3;
       tank1Y=-3;}
       if(b==tank1Y+1 && a==tank1X-2)
       {  a=x;
       b=(y-2);
       score+=1;
       tank1X=-3;
       tank1Y=-3;}
       if(b==tank1Y+1 && a==tank1X+2)
       {  a=x;
       b=(y-2);
       score+=1;
       tank1X=-3;
       tank1Y=-3;
     }
 if(b==tank2Y+1 && a==tank2X)//уничтожение танка2
   {a=x;
  b=(y-2);
  score+=1;
  tank2X=-3;
  tank2Y=-3;}
    if(b==tank2Y+1 && a==tank2X-1)
    { a=x;
    b=(y-2);
    score+=1;
    tank2X=-3;
    tank2Y=-3;
    tank2X--;}
      if(b==tank2Y+1 && a==tank2X+1)
      { a=x;
      b=(y-2);
      score+=1;
      tank2X=-3;
      tank2Y=-3;}
      if(b==tank2Y+1 && a==tank2X-2)
      { a=x;
      b=(y-2);
      score+=1;
      tank2X=-3;
      tank2Y=-3;}
      if(b==tank2Y+1 && a==tank2X+2)
      { a=x;
      b=(y-2);
      score+=1;
      tank2X=-3;
      tank2Y=-3;}
 if(b==tank3Y+1 && a==tank3X)//уничтожение танка3
  { a=x;
   b=(y-2);
   score+=1;
   tank3X=-3;
   tank3Y=-3;}
    if(b==tank3Y+1 && a==tank3X-1)
    { a=x;
      b=(y-2);
      score+=1;
      tank3X=-3;
      tank3Y=-3;}
       if(b==tank3Y+1 && a==tank3X+1)
        { a=x;
          b=(y-2);
          score+=1;
          tank3X=-3;
          tank3Y=-3;}
          if(b==tank3Y+1 && a==tank3X-2)
           { a=x;
             b=(y-2);
             score+=1;
             tank3X=-3;
             tank3Y=-3;}
             if(b==tank3Y+1 && a==tank3X-2)
              { a=x;
                b=(y-2);
                score+=1;
                tank3X=-3;
                tank3Y=-3;}
 if(b==tank4Y+1 && a==tank4X)//уничтожение танка4
 {a=x;
  b=(y-2);
  score+=1;
  tank4X=-3;
  tank4Y=-3;}
    if(b==tank4Y+1 && a==tank4X-1)
     { a=x;
       b=(y-2);
       score+=1;
       tank4X=-3;
       tank4Y=-3;}
         if(b==tank4Y+1 && a==tank4X+1)
           { a=x;
            b=(y-2);
            score+=1;
            tank4X=-3;
            tank4Y=-3;}
            if(b==tank4Y+1 && a==tank4X-2)
              { a=x;
               b=(y-2);
               score+=1;
               tank4X=-3;
               tank4Y=-3;}
               if(b==tank4Y+1 && a==tank4X+2)
                 { a=x;
                  b=(y-2);
                  score+=1;
                  tank4X=-3;
                  tank4Y=-3;}
 if((b1==y+1 && a1==x)||(b1==y+1 && a1==x-1)||(b1==y+1 && a1==x+1))//уничтожение моего танка от пуль танка1
  { a1=tank1X;
     b1=(tank1Y-2);
     Lives-=1;}
        if((b1==y-1 && a1==x)||(b1==y-1 && a1==x-1)||(b1==y-1 && a1==x+1))
         { a1=tank1X;
           b1=(tank1Y-2);
           Lives-=1;}
           if((b1==y && a1==x-1)||(b1==y-1 && a1==x-1)||(b1==y+1 && a1==x-1))
            { a1=tank1X;
              b1=(tank1Y-2);
              Lives-=1;}
              if((b1==y && a1==x+1)||(b1==y-1 && a1==x+1)||(b1==y+1 && a1==x+1))
               { a1=tank1X;
                 b1=(tank1Y-2);
                 Lives-=1;}
 if((b2==y+1 && a2==x)||(b2==y+1 && a2==x-1)||(b2==y+1 && a2==x+1))//уничтожение моего танка от пуль танка2
  { a2=tank2X-2;
     b2=tank2Y;
     Lives-=1;}
        if((b2==y-1 && a2==x)||(b2==y-1 && a2==x-1)||(b2==y-1 && a2==x+1))
         { a2=tank2X-2;
           b2=tank2Y;
           Lives-=1;}
           if((b2==y && a2==x-1)||(b2==y-1 && a2==x-1)||(b2==y+1 && a2==x-1))
            { a2=tank2X-2;
              b2=tank2Y;
              Lives-=1;}
              if((b2==y && a2==x+1)||(b2==y-1 && a2==x+1)||(b2==y+1 && a2==x+1))
               { a2=tank2X-2;
                 b2=tank2Y;
                 Lives-=1;}
 if((b3==y+1 && a3==x)||(b3==y+1 && a3==x-1)||(b3==y+1 && a3==x+1))//уничтожение моего танка от пуль танка3
  { a3=tank3X+2;
     b3=tank3Y;
     Lives-=1;}
        if((b3==y-1 && a3==x)||(b3==y-1 && a3==x-1)||(b3==y-1 && a3==x+1))
         { a3=tank3X+2;
           b3=tank3Y;
           Lives-=1;}
           if((b3==y && a3==x-1)||(b3==y-1 && a3==x-1)||(b3==y+1 && a3==x-1))
            { a3=tank3X+2;
              b3=tank3Y;
              Lives-=1;}
              if((b3==y && a3==x+1)||(b3==y-1 && a3==x+1)||(b3==y+1 && a3==x+1))
               { a3=tank3X+2;
                 b3=tank3Y;
                 Lives-=1;}
 if((b4==y+1 && a4==x)||(b4==y+1 && a4==x-1)||(b4==y+1 && a4==x+1))//уничтожение моего танка от пуль танка4
  { a4=tank4X;
     b4=(tank4Y+2);
     Lives-=1;}
        if((b4==y-1 && a4==x)||(b4==y-1 && a4==x-1)||(b4==y-1 && a4==x+1))
         { a4=tank4X;
           b4=(tank4Y+2);
           Lives-=1;}
           if((b4==y && a4==x-1)||(b4==y-1 && a4==x-1)||(b4==y+1 && a4==x-1))
            { a4=tank4X;
              b4=(tank4Y+2);
              Lives-=1;}
              if((b4==y && a4==x+1)||(b4==y-1 && a4==x+1)||(b4==y+1 && a4==x+1))
               { a4=tank4X;
                 b4=(tank4Y+2);
                 Lives-=1;}
 if(Lives==0){//если я умер = Конец игры
 GameOver=true;
 cout<<"\t\t\t\tGameOver!"<<endl;}
 if( tank1X<=-3 && tank2X<=-3 && tank3X<=-3 && tank4X<=-3)//если все танки уничтожены = Победа
 {Victory=true;
  cout<<"\t\t\t\tVictory!"<<endl;
 }
  if((a+1)>=width || (a-1) <= 0 || (b+1)>=height || (b-1) <= 0 )//при столкновении пули моего танка в стену , она возвращается к танку
 {a=x;
  b=(y-2);}
  if((a1+1)>=width || (a1-1) <= 0 || (b1+1)>=height || (b1-1) <= 0 )//при столкновении пули  танка1 в стену , она возвращается к танку1
 {a1=tank1X;
  b1=(tank1Y-2);}
  if((a2+1)>=width || (a2-1) <= 0 || (b2+1)>=height || (b2-1) <= 0 )//при столкновении пули танка2 в стену , она возвращается к танку2
 {a2=tank2X-2;
  b2=tank2Y;}
  if((a3+1)>=width || (a3-1) <= 0 || (b3+1)>=height || (b3-1) <= 0 )//при столкновении пули танка3 в стену , она возвращается к танку3
 {a3=tank3X+2;
  b3=tank3Y;}
  if((a4+1)>=width || (a4-1) <= 0 || (b4+1)>=height || (b4-1) <= 0 )//при столкновении пули  танка4 в стену , она возвращается к танку4
 {a4=tank4X;
    b4=(tank4Y+2);}
if((x+2)>=width)//столкновление моего танка со стеной
 x=width-3;
  else if((x-2)<=0)
  x=3;
   else if((y+2)>=height)
    y=height-2;
      else if((y-2)<=0)
        y=2;
        else if((b-2)<=0)
          b=2;
 if((tank1X+1)>=width)//столкновление  танка1 со стеной
 tank1X=width-3;
 else if((tank1X-1)==0)
  tank1X=3;
  else if((tank1X)==0)
   tank1X=1;
   else if((tank1Y+1)>=height)
    tank1Y=height-2;
      else if((tank1Y-1)==0)
        tank1Y=2;
        else if(tank1Y==0)
          tank1Y=3;
 if((tank2X+1)>=width)//столкновление  танка2 со стеной
 tank2X=width-3;
   else if((tank2X-1)==0)
      tank2X=3;
      else if((tank2X)==0)
       tank2X=1;
       else if((tank2Y+1)>=height)
         tank2Y=height-2;
         else if((tank2Y-1)==0)
           tank2Y=2;
           else if(tank2Y==0)
             tank2Y=1;
      if((tank3X+1)>=width)//столкновление  танка3 со стеной
        tank3X=width-3;
        else if((tank3X)==0)
         tank3X=1;
         else if((tank3X-1)==0)
             tank3X=3;
             else if((tank3Y+1)>=height)
               tank3Y=height-2;
               else if((tank3Y-1)==0)
                   tank3Y=2;
                   else if(tank3Y==0)
                     tank3Y=1;
         if((tank4X+1)>=width)//столкновление  танка4 со стеной
          tank4X=width-3;
            else if((tank4X-1)==0)
               tank4X=3;
               else if((tank4X)==0)
                tank4X=1;
                else if((tank4Y+1)>=height)
                  tank4Y=height-2;
                  else if((tank4Y-1)==0)
                    tank4Y=2;
                    else if(tank4Y==0)
                      tank4Y=1;
            }
int main()
{
 srand( time( 0 ) );
  Setup();
  while((!GameOver==!Victory))
  {
    BuildMap();
    Input();
    Logic();

  }
  return 0;
}
