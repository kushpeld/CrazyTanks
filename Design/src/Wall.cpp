#include "Wall.h"
Wall wall;
void Wall::Position()
{
    WallX1=rand() % width;
    WallY1=rand() % height;
    WallX2=rand() % width;
    WallY2=rand() % height;
    WallX3=rand() % width;
    WallY3=rand() % height;
    WallX4=rand() % width;
    WallY4=rand() % height;
    WallX5=rand() % width;
    WallY5=rand() % height;
    WallX6=rand() % width;
    WallY6=rand() % height;
    WallX7=rand() % width;
    WallY7=rand() % height;
    GoldWallX=GoldX=width/2-6;
    GoldWallY=height-2;
}
void Wall::BuildWalls()
{
  for(int i=0;i<world.height;i++)
  {
   for(int j=0;j<world.width;j++)
   {if(i==GoldWallY && j==GoldWallX)
   Map[i][j]='-';
   if(i==GoldWallY+1 && j==GoldWallX-1)
   Map[i][j]='|';
   if(i==GoldWallY+1 && j==GoldWallX+1)
   Map[i][j]='|';

       if(i==WallY1 && j==WallX1 )
         Map[i][j]='#';
            if(i==WallY1+1 && j==WallX1 )
             Map[i][j]='#';
               if(i==WallY1+2 && j==WallX1 )
                Map[i][j]='#';
         if(i==WallY2 && j==WallX2 )
          Map[i][j]='#';
           if(i==WallY2 && j==WallX2+1 )
            Map[i][j]='#';
             if(i==WallY2 && j==WallX2+2 )
             Map[i][j]='#';
         if(i==WallY3 && j==WallX3 )
          Map[i][j]='#';
           if(i==WallY3 && j==WallX3-1 )
            Map[i][j]='#';
             if(i==WallY3 && j==WallX3-2 )
              Map[i][j]='#';
         if(i==WallY4 && j==WallX4 )
          Map[i][j]='#';
           if(i==WallY4+1 && j==WallX4 )
            Map[i][j]='#';
             if(i==WallY4+2 && j==WallX4 )
              Map[i][j]='#';
         if(i==WallY5 && j==WallX5 )
          Map[i][j]='#';
           if(i==WallY5 && j==WallX5+1 )
            Map[i][j]='#';
            if(i==WallY5 && j==WallX5+2 )
            Map[i][j]='#';
         if(i==WallY6 && j==WallX6 )
         Map[i][j]='#';
         if(i==WallY6+1 && j==WallX6 )
         Map[i][j]='#';
         if(i==WallY6+2 && j==WallX6 )
         Map[i][j]='#';
         if(i==WallY7 && j==WallX7 )
         Map[i][j]='#';
         if(i==WallY7+1 && j==WallX7 )
         Map[i][j]='#';
         if(i==WallY7+2 && j==WallX7 )
         Map[i][j]='#';
}}}
