#include "pch.h"
#include "Map.h"


Map::Map()
{
}

void Map::Add(Habitación habitación)
{
	_habitaciones++;
	_mapa.insert(std::pair<int, Habitación>(_habitaciones, habitación));
}

void Map::Remove(Habitación habitación)
{

}

Map::~Map()
{
}
