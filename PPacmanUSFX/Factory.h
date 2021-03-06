#pragma once
#include "GameObject.h"
#include "Tile.h"
#include "TextureManager.h"

class Factory
{
public:
	virtual GameObject* createPacmanInstance(Tile* _tile, TextureManager* _texturaManager) = 0;
	virtual GameObject* createFantasmaInstance(Tile* _tile, TextureManager* _texturaManager) = 0;
	virtual GameObject* createParedInstance(Tile* _tile, TextureManager* _texturaManager) = 0;
	virtual GameObject* createFrutaInstance(Tile* _tile, TextureManager* _texturaManager) = 0;
	virtual GameObject* createMonedaInstance(Tile* _tile, TextureManager* _texturaManager) = 0;
};

