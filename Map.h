#pragma once
#include "Habitaci�n.h"
#include <list>
#include <set>
#include <map>

class Map
{
public:
	Map();
	std::map <int, Habitaci�n> _mapa;
	std::set <Llave> _llaves;
	std::set <Puerta> _puertas;
	int _habitaciones = 0;

	void Add(Habitaci�n habitaci�n);
	void Remove(Habitaci�n habitaci�n);

	~Map();
};

