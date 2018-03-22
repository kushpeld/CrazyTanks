#include<iostream>
#include<ctime>
#include<vector>
#include<string>
#include<thread>
#include<conio.h>
#include <iostream>
#include <cmath>
#include <map>
#include <utility>
using namespace std;
enum Direction { STOP = 0, LEFT, RIGHT, UP, DOWN };
bool GameOver=false;

class Wall
{
 private:
	int YPos;
	int XPos;
 public:
	 int health=3;
	Wall(int XPos, int YPos);
	void LossHP(int health)
	{health--;}
 };
 Wall::Wall(int XPos, int YPos)
 {
	this->XPos = XPos;
	this->YPos = YPos;
 }

class World
{
public:
	static const int width = 50;
  static const int height = 50;
	char Map[width][height];
	void MapDraw();
	void DataMap();
	void WallsDraw();
 };
 World world;
 void World::MapDraw()
 {
	system("cls");
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++)
			{cout << Map[i][j];}
		cout << endl;
	}}
	void World::DataMap()
{
		for (int i = 0; i < width; i++)
			Map[0][i] = '#';
      for (int i = 0; i < width; i++)
  			Map[width - 1][i] = '#';
		for (int i = 1; i < height-1 ; i++) {
			for (int j = 0; j < width; j++) {
				if (j == 0 || j == width - 1)
					Map[i][j] = '#';
				else
			   Map[i][j] = ' ';
			}}}

		void World::WallsDraw()
		{
			int XPos=rand() % width;
			int YPos=rand() % height;
			for(int i=0;i<height;i++){
  for(int j=0;j<width;j++)
	{
		if(i==YPos && j==XPos )
    Map[i][j]='#';
	}}}
class Bullet
{public:
  int Xpos;
  int Ypos;
  Direction dir;
  char image;
  Bullet(int Ypos,int Xpos,Direction dir,char image);
  void Logic();
};
Bullet::Bullet(int Ypos, int Xpos, Direction dir, char image)
{
	this->Ypos = Ypos;
	this->Xpos = Xpos;
	this->dir = dir;
}

class Tank
{public:
  int Ypos;
  int Xpos;
  Direction dir;
  bool alive(){return this->health > 0 ? true : false;};
  int health;
  void Damage(int health){this->health--;};
  void Fire();
  void Position(int Xpos,int Ypos);
};
class MyTank : public Tank
{public:
  int score;
  Direction dir;
  void Logic();
  void Input();
  void Position();
};
void MyTank::Input()
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
void MyTank::Logic()
    {
    	switch (dir) {
    		case LEFT : {
    			if (world.Map[Ypos][Xpos - 1] == '#') {
    				dir = STOP;
    				break;
    			}
    			world.Map[Ypos][Xpos] = ' ';
    			Xpos--;
    			world.Map[Ypos][Xpos] = 'T';
    			break;
    		}
    		case RIGHT : {
    			if (world.Map[Ypos][Xpos + 1] == '#' ) {
    				dir = STOP;
    				break;
    			}
    			world.Map[Ypos][Xpos] = ' ';
    			Xpos++;
    			world.Map[Ypos][Xpos] = 'T';
    			break;
    		}
    		case UP : {
    			if (world.Map[Ypos - 1][Xpos] == '#' ) {
    				dir = STOP;
    				break;
    			}
    			world.Map[Ypos][Xpos] = ' ';
    			Ypos--;
    		 world.Map[Ypos][Xpos] = 'T';
    			break;
    		}
    		case DOWN : {
    			if (world.Map[Ypos + 1][Xpos] == '#') {
    				dir = STOP;
    				break;
    			}
    	  world.Map[Ypos][Xpos] = ' ';
    			Ypos++;
    			world.Map[Ypos][Xpos] = 'T';
    			break;
    		}
    	}
    }
void MyTank::Position()
{
	this->Xpos = world.height -2;
	this->Ypos = world.width/2-1;
}


int main()
{World *world=new World();
	world->DataMap();
	world->WallsDraw();
	world->MapDraw();
	delete(world);
  system("pause");
	return 0;
}
