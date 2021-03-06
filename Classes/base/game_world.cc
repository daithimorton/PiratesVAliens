/*

Copyright (c) 2016 David Morton

*/
#include "base/game_world.h"

namespace base{

GameWorld::GameWorld(int width, int height)
{
	m_iWorldWidth = width;
	m_iWorldHeight = height;
	m_Grid.resize(width, std::vector<int>(height, 0));
}

int GameWorld::GetWorldWidth()
{
	return m_iWorldWidth;
}

int GameWorld::GetWorldHeight()
{
	return m_iWorldHeight;
}

int GameWorld::GetCellX(int x)
{
	return x / CELL_SIZE;
}

int GameWorld::GetCellY(int y)
{
	return y / CELL_SIZE;
}

int GameWorld::GetCellZ(int z)
{
	return z / CELL_SIZE;
}

int GameWorld::GetCellState(int x, int y, int z)
{
	return m_Grid[x][z];
}

void GameWorld::SetCellState(int x, int y, int z, int state)
{
	m_Grid[x][z] = state;
}

}
