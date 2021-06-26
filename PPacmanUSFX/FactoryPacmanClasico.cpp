#include "FactoryPacmanClasico.h"

GameObject* FactoryPacmanClasico::createPacmanInstance(Tile* _tile, TextureManager* _textureManager) {
    return new PacmanClasico(_tile, _textureManager->getTextura("pacman_clasico"));
}

GameObject* FactoryPacmanClasico::createFantasmaInstance(Tile* _tile, TextureManager* _textureManager) {
    return new FantasmaClasico(_tile, _textureManager->getTextura("fantasma_clasico1"));
}

GameObject* FactoryPacmanClasico::createParedInstance(Tile* _tile, TextureManager* _textureManager) {
    return new ParedClasico(_tile, _textureManager->getTextura("pared_clasico"));
}

//GameObject* FactoryPacmanClasico::createParedInstance(Tile* _tile, TextureManager* _textureManager) {
//    return ((Pared*)new ParedClasicoAdapter(_tile, _textureManager->getTextura("pared_clasico_adapter"), _posicionX, _posicionY));
//}

GameObject* FactoryPacmanClasico::createFrutaInstance(Tile* _tile, TextureManager* _textureManager) {
    return new FrutaClasico(_tile, _textureManager->getTextura("fruta_clasico"));
}

GameObject* FactoryPacmanClasico::createMonedaInstance(Tile* _tile, TextureManager* _textureManager) {
    return new MonedaClasico(_tile, _textureManager->getTextura("moneda_clasico"));
}
