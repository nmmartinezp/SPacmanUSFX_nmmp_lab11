#include "Fruta.h"
#include <iostream>

using namespace std;

Fruta::Fruta(Tile* _tile, Texture* _texture) :
	GameActor(_texture)
{
	tileActual = _tile;

	if (tileActual != nullptr) {
		tileActual->setFruta(nullptr);

		posicionX = tileActual->getPosicionX() * Tile::anchoTile;
		posicionY = tileActual->getPosicionY() * Tile::altoTile;
	}
	else {
		posicionX = 0;
		posicionY = 0;
	}

	tipoFruta = TIPO_FRUTA_FRUTILLA;

	visible = false;

	tiempoVisible = 100;
	tiempoInvisible = 150;
	contadorTiempoVisible = 0;
	contadorTiempoInvisible = 0;
	int numeroFrutaVisible = 0;
}

//void Fruta::setTileActual(Tile* _tileNuevo) {
//	if (tileActual != nullptr) {
//		tileActual->setFruta(nullptr);
//	}
//
//	tileActual = _tileNuevo;
//
//	if (tileActual != nullptr) {
//		tileActual->setFruta(this);
//
//		posicionX = tileActual->getPosicionX() * Tile::anchoTile;
//		posicionY = tileActual->getPosicionY() * Tile::altoTile;
//	}
//
//}

void Fruta::deleteGameObject()
{
	// Calling the base function
	GameObject::deleteGameObject();
	tileActual->setFantasma(nullptr);
}
//Fruta::~Fruta()
//{
//	free();
//}


