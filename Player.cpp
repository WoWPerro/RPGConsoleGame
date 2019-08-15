#include "pch.h"
#include "Player.h"


Player::Player()
{

}

void Player::move(int cuarto)
{
	_cuartoActual = cuarto;
}

int Player::CuartoActual()
{
	return _cuartoActual;
}


Player::~Player()
{

}
