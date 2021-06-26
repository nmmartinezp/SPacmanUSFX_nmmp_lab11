#include "MsPacman.h"

MsPacman::MsPacman(Tile* _tile, Texture* _texturaPacman, int _posicionX, int _posicionY, int _ancho, int _alto, int _anchoPantalla, int _altoPantalla, int _velocidadPatron):
	Pacman::Pacman(_tile, _texturaPacman, _posicionX, _posicionY, _ancho, _alto, _anchoPantalla, _altoPantalla, _velocidadPatron){

}

void MsPacman::handleEvent(SDL_Event* event)
{
	if (event->type == SDL_KEYDOWN && event->key.repeat == 0) {
		switch (event->key.keysym.sym)
		{
			// Move up
		case SDLK_UP:direccionSiguiente = MOVE_UP; break;
			//case SDLK_w: direccionSiguiente = MOVE_UP; break;

				// Move down
		case SDLK_DOWN:direccionSiguiente = MOVE_DOWN; break;
			//case SDLK_s: direccionSiguiente = MOVE_DOWN; break;

				// Move left
		case SDLK_LEFT:direccionSiguiente = MOVE_LEFT; break;
			//case SDLK_a: direccionSiguiente = MOVE_LEFT; break;

				// Move right
		case SDLK_RIGHT:direccionSiguiente = MOVE_RIGHT; break;
			//case SDLK_d: direccionSiguiente = MOVE_RIGHT; break;
		}
	}
}
