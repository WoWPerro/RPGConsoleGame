#pragma once
#include "Objeto.h"
#include "Enemy.h"
#include "Puerta.h"
#include "Llave.h"

#include <iostream>
#include <string>
#include <set>
#include <list>
#include <forward_list>

class Habitación
{
private:

	std::string _descripcion;

	std::list <Objeto> _objetos;
	std::set <Llave> _llaves;
	std::forward_list <Puerta> _puertas;
	std::list <Enemy> _enemigos;

public:

	Habitación();

	void LeerHabitacion();
	void SetDescription(std::string descripcion);
	void Add(Puerta puerta);
	void Remove(Puerta puerta);
	void Add(Objeto obj);
	void Remove(Objeto obj);
	void Add(Llave llave);
	void Remove(Llave llave);
	void Add(Enemy enemy);
	void Remove(Enemy enemy);
	
	~Habitación();
};

