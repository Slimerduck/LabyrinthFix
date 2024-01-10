#include "map.h"

void Map::init() {
	player = new Player(Vector2f(70,70),"images/player1.png");
}
Map::Map() {
	init();
}
void Map::draw(RenderWindow &window) {
	for (int r = 0;r < HEIGHT_MAP;r++) {
		for (int c = 0;c < WIDTH_MAP;c++) {
			if (TileMap[r][c] == 's') {
				mapSprite.setTextureRect(IntRect(0, 0, 60, 60));
			}
			if (TileMap[r][c] == 'g') {
				mapSprite.setTextureRect(IntRect(60 * 0, 60 * 1, 60, 60));
			}
			mapSprite.setPosition(c * 60, r * 60);
			window.draw(mapSprite);
		}
	}
	window.draw(player->getSprite());
	window.draw(coin->getSprite());
}
void Map::update() {
	player->update();
}
Player* Map::getPlayer() {
	return player;
}