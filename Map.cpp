#include "pch.h"
#include "Map.h"


Map::Map()
{
}

void Map::Add(Habitaci�n habitaci�n)
{
	_habitaciones++;
	_mapa.insert(std::pair<int, Habitaci�n>(_habitaciones, habitaci�n));
}

void Map::Remove(Habitaci�n habitaci�n)
{

}

Map::~Map()
{
}
