#include "Bullet.h"

Bullet bullet;
void Bullet::Position()
{ a=mytank.x;
  b=mytank.y;
  a1=enemy.tank1X;
  b1=enemy.tank1Y;
  a2=enemy.tank2X;
  b2=enemy.tank2Y;
  a3=enemy.tank3X;
  b3=enemy.tank3Y;
  a4=enemy.tank4X;
  b4=enemy.tank4Y;
  for(int i=0;i<height;i++)
	{
	 for(int j=0;j<width;j++)
	 {
  if(i==b-2 && j==a)
   Map[i][j]='*';
   if(i==b1-2 && j==a1)
   Map[i][j]='*';
   if(i==b2 && j==a2-2)
     Map[i][j]='*';
     if(i==b3 && j==a3+2)
       Map[i][j]='*';
       if(i==b4+2 && j==a4)
         Map[i][j]='*';
 }}
}
void Bullet::Logic()
{direct=rand()%5;
{  switch(direct)//движение  моих и вражеских пуль
  {
    case 1:
        b--;b1--;a3++;b4++;a2--;
        break;
    case 2:
        b--;b1--;a3++;b4++;a2--;
        break;
    case 3:
         b--;b1--;a3++;b4++;a2--;
        break;
    case 4:
    b--;b1--;a3++;b4++;a2--;
        break;
  }
}
if((a+1)>=world.width || (a-1) <= 0 || (b+1)>=world.height || (b-1) <= 0 )//при столкновении пули моего танка в стену , она возвращается к танку
{a=mytank.x;
b=(mytank.y-2);}
if((a1+1)>=world.width || (a1-1) <= 0 || (b1+1)>=world.height || (b1-1) <= 0 )//при столкновении пули  танка1 в стену , она возвращается к танку1
{a1=enemy.tank1X;
b1=(enemy.tank1Y-2);}
if((a2+1)>=world.width || (a2-1) <= 0 || (b2+1)>=world.height || (b2-1) <= 0 )//при столкновении пули танка2 в стену , она возвращается к танку2
{a2=enemy.tank2X-2;
b2=enemy.tank2Y;}
if((a3+1)>=world.width || (a3-1) <= 0 || (b3+1)>=world.height || (b3-1) <= 0 )//при столкновении пули танка3 в стену , она возвращается к танку3
{a3=enemy.tank3X+2;
b3=enemy.tank3Y;}
if((a4+1)>=world.width || (a4-1) <= 0 || (b4+1)>=world.height || (b4-1) <= 0 )//при столкновении пули  танка4 в стену , она возвращается к танку4
{a4=enemy.tank4X;
  b4=(enemy.tank4Y+2);}
