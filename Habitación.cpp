#include "pch.h"
#include "Habitaci�n.h"


Habitaci�n::Habitaci�n()
{
}

void Habitaci�n::LeerHabitacion()
{
	std::cout << _descripcion << std::endl;
}

void Habitaci�n::SetDescription(std::string descripcion)
{
	_descripcion = descripcion;
}

void Habitaci�n::Add(Puerta puerta)
{
	_puertas.push_front(puerta);
}

void Habitaci�n::Add(Objeto obj)
{
	_objetos.push_back(obj);
}

void Habitaci�n::Add(Llave llave)
{
	//_llaves.insert(llave);
}

void Habitaci�n::Add(Enemy enemy)
{
	_enemigos.push_back(enemy);
}

void Habitaci�n::Remove(Puerta puerta)
{

}

void Habitaci�n::Remove(Objeto obj)
{

}

void Habitaci�n::Remove(Llave llave)
{

}

void Habitaci�n::Remove(Enemy enemy)
{

}

Habitaci�n::~Habitaci�n()
{
}
