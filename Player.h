#pragma once
#include <list>
#include <set>
#include "Objeto.h"
#include "Llave.h"

class Player
{
public:
	Player();

	int _cuartoActual = 1;
	int _vida = 100;
	std::list <Objeto> _objetos;
	std::set <Llave> _llaves;
	int _fuerzaCarga = 100;

	int _maxVida = 50;

	void move(int cuarto);
	int CuartoActual();
	~Player();
};

