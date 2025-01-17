#pragma once

#include "food.h"

#define ROW 480
#define COL 640
#define SCALE 20

enum condit { EMPTY, WALL, SNAKE_HEAD, SNAKE_BODY, SNAKE_TAIL, APPLE, GRAPE, CHICKEN, GOLDAP };	//此枚举表示地图中每个方块的状态

class Wall {
public:
	void initWall();						//初始化游戏地图
	void drawWall(int x, int y);			//画墙壁
	condit getCondit(int x, int y);			//获取地图方块的状态
	void setCondit(int x, int y, condit);	//设置地图方块的状态
	friend void food::renew();

private:
	condit gameMap[ROW / SCALE][COL / SCALE];		//游戏地图数组，存放每个地图方块的数据情况
};

extern Wall Map;
