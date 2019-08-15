#include "pch.h"
#include "Habitación.h"


Habitación::Habitación()
{
}

void Habitación::LeerHabitacion()
{
	std::cout << _descripcion << std::endl;
}

void Habitación::SetDescription(std::string descripcion)
{
	_descripcion = descripcion;
}

void Habitación::Add(Puerta puerta)
{
	_puertas.push_front(puerta);
}

void Habitación::Add(Objeto obj)
{
	_objetos.push_back(obj);
}

void Habitación::Add(Llave llave)
{
	//_llaves.insert(llave);
}

void Habitación::Add(Enemy enemy)
{
	_enemigos.push_back(enemy);
}

void Habitación::Remove(Puerta puerta)
{

}

void Habitación::Remove(Objeto obj)
{

}

void Habitación::Remove(Llave llave)
{

}

void Habitación::Remove(Enemy enemy)
{

}

Habitación::~Habitación()
{
}
