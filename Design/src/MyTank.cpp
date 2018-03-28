#include "MyTank.h"

MyTank mytank;
 void MyTank::Setup()
{
  x=width/2-1;//середина ширины
  y=height-2;
}
void MyTank::Position()
{


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
									Map[i][j]='*';}}
}
void MyTank::Input()//нажатия клавиш для движение моего танка
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
      case 'z':
          dir=STOP;
          break;

      case 'g':
          GameOver=true;
          cout<<"\t\t\t\tGameOver!"<<endl;
          break;

    }}}
    void MyTank::Logic()
    {
      switch(dir)//движение моего танка
      {
        case LEFT:
          x--;
           if(x-2==WallX1 && y-1==WallY1 )
           {x=WallX1+3;y=WallY1+1;dir=STOP;}

            if(x-2==WallX1 && y-1==WallY1+1 )
            {x=WallX1+3;y=WallY1+2;dir=STOP;}

            if(x-2==WallX1 && y-1==WallY1+2)
            {x=WallX1+3;y=WallY1+3;dir=STOP;}

            if(x-2==WallX1 && y+1==WallY1 )
            {x=WallX1+3;y=WallY1-1;dir=STOP;}

            if(x-2==WallX1 && y+1==WallY1+1 )
            {x=WallX1+3;y=WallY1-2;dir=STOP;}

            if(x-2==WallX1 && y+1==WallY1+2 )
            {x=WallX1+3; y=WallY1-3;dir=STOP;}

            if(x-2==WallX4 && y-1==WallY4 )
            {x=WallX4+3;y=WallY4+1;dir=STOP;}

             if(x-2==WallX4 && y-1==WallY4+1 )
             {x=WallX4+3;y=WallY4+2;dir=STOP;}

             if(x-2==WallX4 && y-1==WallY4+2)
             {x=WallX4+3;y=WallY4+3;dir=STOP;}

             if(x-2==WallX4 && y+1==WallY4 )
             {x=WallX4+3;y=WallY4-1;dir=STOP;}

             if(x-2==WallX4 && y+1==WallY4+1 )
             {x=WallX4+3;y=WallY4-2;dir=STOP;}

             if(x-2==WallX4 && y+1==WallY4+2 )
             {x=WallX4+3; y=WallY4-3;dir=STOP;}

             if(x-2==WallX6 && y-1==WallY6 )
             {x=WallX6+3;y=WallY6+1;dir=STOP;}

              if(x-2==WallX6 && y-1==WallY6+1 )
              {x=WallX6+3;y=WallY6+2;dir=STOP;}

              if(x-2==WallX6 && y-1==WallY6+2)
              {x=WallX6+3;y=WallY6+3;dir=STOP;}

              if(x-2==WallX6 && y+1==WallY6 )
              {x=WallX6+3;y=WallY6-1;dir=STOP;}

              if(x-2==WallX6 && y+1==WallY6+1 )
              {x=WallX6+3;y=WallY6-2;dir=STOP;}

              if(x-2==WallX6 && y+1==WallY6+2 )
              {x=WallX6+3; y=WallY6-3;dir=STOP;}

              if(x-2==WallX7 && y-1==WallY7 )
              {x=WallX7+3;y=WallY7+1;dir=STOP;}

               if(x-2==WallX7 && y-1==WallY7+1 )
               {x=WallX7+3;y=WallY7+2;dir=STOP;}

               if(x-2==WallX7 && y-1==WallY7+2)
               {x=WallX7+3;y=WallY7+3;dir=STOP;}

               if(x-2==WallX7 && y+1==WallY7 )
               {x=WallX7+3;y=WallY7-1;dir=STOP;}

               if(x-2==WallX7 && y+1==WallY7+1 )
               {x=WallX7+3;y=WallY7-2;dir=STOP;}

               if(x-2==WallX7 && y+1==WallY7+2 )
               {x=WallX7+3; y=WallY7-3;dir=STOP;}
                  break;
        case RIGHT:
              x++;
              if(x+2==WallX1 && y-1==WallY1 )
              {x=WallX1-3;y=WallY1+1;dir=STOP;}

              if(x+2==WallX1 && y-1==WallY1+1 )
              {x=WallX1-3;y=WallY1+2;dir=STOP;}

              if(x+2==WallX1 && y-1==WallY1+2)
              {x=WallX1-3;y=WallY1+3;dir=STOP;}

              if(x+2==WallX1 && y+1==WallY1 )
              {x=WallX1-3;y=WallY1-1;dir=STOP;}

              if(x+2==WallX1 && y+1==WallY1+1 )
              {x=WallX1-3;y=WallY1-2;dir=STOP;}

              if(x+2==WallX1 && y+1==WallY1+2 )
              {x=WallX1-3; y=WallY1-3;dir=STOP;}

              if(x+2==WallX4 && y-1==WallY4 )
              {x=WallX4-3;y=WallY4+1;dir=STOP;}

              if(x+2==WallX4 && y-1==WallY4+1 )
              {x=WallX4-3;y=WallY4+2;dir=STOP;}

              if(x+2==WallX4 && y-1==WallY4+2)
              {x=WallX4-3;y=WallY4+3;dir=STOP;}

              if(x+2==WallX4 && y+1==WallY4 )
              {x=WallX4-3;y=WallY4-1;dir=STOP;}

              if(x+2==WallX4 && y+1==WallY4+1 )
              {x=WallX4-3;y=WallY4-2;dir=STOP;}

              if(x+2==WallX4 && y+1==WallY4+2 )
              {x=WallX4-3; y=WallY4-3;dir=STOP;}

              if(x+2==WallX6 && y-1==WallY6 )
              {x=WallX6-3;y=WallY6+1;dir=STOP;}

              if(x+2==WallX6 && y-1==WallY6+1 )
              {x=WallX6-3;y=WallY6+2;dir=STOP;}

              if(x+2==WallX6 && y-1==WallY6+2)
              {x=WallX6-3;y=WallY6+3;dir=STOP;}

              if(x+2==WallX6 && y+1==WallY6 )
              {x=WallX6-3;y=WallY6-1;dir=STOP;}

              if(x+2==WallX6 && y+1==WallY6+1 )
              {x=WallX6-3;y=WallY6-2;dir=STOP;}

              if(x+2==WallX6 && y+1==WallY6+2 )
              {x=WallX6-3; y=WallY6-3;dir=STOP;}

              if(x+2==WallX7 && y-1==WallY7 )
              {x=WallX7-3;y=WallY7+1;dir=STOP;}

              if(x+2==WallX7 && y-1==WallY7+1 )
              {x=WallX7-3;y=WallY7+2;dir=STOP;}

              if(x+2==WallX7 && y-1==WallY7+2)
              {x=WallX7-3;y=WallY7+3;dir=STOP;}

              if(x+2==WallX7 && y+1==WallY7 )
              {x=WallX7-3;y=WallY7-1;dir=STOP;}

              if(x+2==WallX7 && y+1==WallY7+1 )
              {x=WallX7-3;y=WallY7-2;dir=STOP;}

              if(x+2==WallX7 && y+1==WallY7+2 )
              {x=WallX7-3; y=WallY7-3;dir=STOP;}
           break;
        case UP:
             y--;
             if (x==WallX1 && y-1==WallY1+3)
             {x=WallX1;y=WallY1+5;dir=STOP;}

             if (x-1==WallX1 && y-1==WallY1+3)
             {x=WallX1+1;y=WallY1+5;dir=STOP;}

             if (x+1==WallX1 && y-1==WallY1+3)
             {x=WallX1-1;y=WallY1+5;dir=STOP;}

             if (x==WallX4 && y-1==WallY4+3)
             {x=WallX4;y=WallY4+5;dir=STOP;}

             if (x-1==WallX4 && y-1==WallY4+3)
             {x=WallX4+1;y=WallY4+5;dir=STOP;}

             if (x+1==WallX4 && y-1==WallY4+3)
             {x=WallX4-1;y=WallY4+5;dir=STOP;}

             if (x==WallX6 && y-1==WallY6+3)
             {x=WallX1;y=WallY6+5;dir=STOP;}

             if (x-1==WallX6 && y-1==WallY6+3)
             {x=WallX6+1;y=WallY6+5;dir=STOP;}

             if (x+1==WallX6 && y-1==WallY6+3)
             {x=WallX6-1;y=WallY6+5;dir=STOP;}

             if (x==WallX7 && y-1==WallY7+3)
             {x=WallX7;y=WallY7+5;dir=STOP;}

             if (x-1==WallX7 && y-1==WallY7+3)
             {x=WallX6+1;y=WallY6+5;dir=STOP;}

             if (x+1==WallX7 && y-1==WallY7+3)
             {x=WallX7-1;y=WallY7+5;dir=STOP;}

           break;
       case DOWN:
             y++;
             if (x==WallX1 && y+1==WallY1-1)
             {x=WallX1;y=WallY1-3;dir=STOP;}

             if (x-1==WallX1 && y+1==WallY1-1)
             {x=WallX1+1;y=WallY1-3;dir=STOP;}

             if (x+1==WallX1 && y+1==WallY1-1)
             {x=WallX1-1;y=WallY1-3;dir=STOP;}

             if (x==WallX4 && y+1==WallY4-1)
             {x=WallX4;y=WallY4-3;dir=STOP;}

             if (x-1==WallX4 && y+1==WallY4-1)
             {x=WallX4+1;y=WallY4-3;dir=STOP;}

             if (x+1==WallX4 && y+1==WallY4-1)
             {x=WallX4-1;y=WallY4-3;dir=STOP;}

             if (x==WallX6 && y+1==WallY6-1)
             {x=WallX6;y=WallY6-3;dir=STOP;}

             if (x-1==WallX6 && y+1==WallY6-1)
             {x=WallX6+1;y=WallY6-3;dir=STOP;}

             if (x+1==WallX6 && y+1==WallY6-1)
             {x=WallX6-1;y=WallY6-3;dir=STOP;}

             if (x==WallX7 && y+1==WallY7-1)
             {x=WallX7;y=WallY7-3;dir=STOP;}

             if (x-1==WallX7 && y+1==WallY7-1)
             {x=WallX7+1;y=WallY7-3;dir=STOP;}

             if (x+1==WallX7 && y+1==WallY7-1)
             {x=WallX7-1;y=WallY7-3;dir=STOP;}
           break;
       case STOP:
             break;
    }
    if((x+2)>=world.width)//столкновление моего танка со стеной
     x=world.width-3;
      else if((x-2)<=0)
      x=3;
       else if((y+2)>=world.height)
        y=world.height-2;
          else if((y-2)<=0)
            y=2;
            else if((bullet.b-2)<=0)
              bullet.b=2;
