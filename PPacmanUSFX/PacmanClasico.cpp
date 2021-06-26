#include "PacmanClasico.h"

//PacmanClasico::PacmanClasico(Tile* _tile, Texture* _texturaPacman, int _posicionX, int _posicionY, int _velocidadPatron)
//	:GameObject(_texturaPacman, _posicionX, _posicionY)
//{
//}

#include <stdio.h>
//#include "Pacman.h"
PacmanClasico::PacmanClasico(Tile* _tile, Texture* _texturaPacmanClasico) :
	Pacman(_tile, _texturaPacmanClasico)
{
	tileActual = _tile;
	tileSiguiente = nullptr;

	if (tileActual != nullptr) {
		tileActual->setPacman(this);

		posicionX = tileActual->getPosicionX() * Tile::anchoTile;
		posicionY = tileActual->getPosicionY() * Tile::altoTile;
	}
	else {
		posicionX = 0;
		posicionY = 0;
	}


	//Colisionador ancho y alto 
	//collider->w = Width;
	//collider->h = Height;

	////colisionador posicionX
	//collider->x = posicionX;

	////colisionador posicionY
	//collider->y = posicionY;

	direccionActual = MOVE_RIGHT;
	direccionSiguiente = MOVE_RIGHT;


	// Inicializa propiedade de de pacman
	//velocidad = _velocidad;
	vida = 10;
}



//DESTRUCTOR y deja un espacio libre 
//PacmanClasico::~PacmanClasico()
//{
	//Free();
//}

bool PacmanClasico::tratarDeMover(MoveDirection _direccionNueva)
{
	return false;
}

