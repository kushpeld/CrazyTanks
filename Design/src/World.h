
#include <iostream>
#include <random>
#include <conio.h>
#include <Windows.h>
#include<string>
#include <vector>
#include <ctime>
#include <Windows.h>
#include <cstdlib>
#include "EnemyTank.h"
#include "Wall.h"
#include "Bullet.h"
#include "MyTank.h"
#include "EnemyTank.h"
#include "Tank.h"
using namespace std;
enum Direction {STOP=0,LEFT,RIGHT,UP,DOWN};//направление для своего танк
Direction dir;

class World
{
public:
	int width=76 ;
  int height=33
	int GoldX,GoldY;
	string Map[width][height];
	void BuildMap();
	void Input();
	void DataMap();
	void Setup();
};
