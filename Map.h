#pragma once
#include "Habitación.h"
#include <list>
#include <set>
#include <map>

class Map
{
public:
	Map();
	std::map <int, Habitación> _mapa;
	std::set <Llave> _llaves;
	std::set <Puerta> _puertas;
	int _habitaciones = 0;

	void Add(Habitación habitación);
	void Remove(Habitación habitación);

	~Map();
};

