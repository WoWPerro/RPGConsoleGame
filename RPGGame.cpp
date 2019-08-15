// RPGGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Map.h"
#include "Habitación.h"
#include "Player.h"

int main()
{
	Map mapa1;
	//-----------------------------Niveles--------------------------------
	Habitación R1;
	R1.SetDescription("Prueba");
	Puerta P1(true);
	R1.Add(P1);
	mapa1.Add(R1);

	Habitación R2;
	R2.SetDescription("Prueba 2");
	Puerta P2(true);
	R2.Add(P2);
	mapa1.Add(R2);
	//-----------------------------Player----------------------------------
	Player hero;
	std::cout << hero.CuartoActual() << "\n";
	hero.move(2);
	std::cout << hero.CuartoActual() << "\n";
	//------------------------------GAME-----------------------------------

    std::cout << "Hello World!\n"; 
}


