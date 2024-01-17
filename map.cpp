#include "map.h"

void Map::init() {
	player = new Player(Vector2f(70,70),"images/player1.png");
	for (int r = 0;r < HEIGHT_MAP;r++) {
		for (int c = 0;c < WIDTH_MAP;c++) {
			if (TileMap[r][c] == 'm')
			{
				Floor* floor = new Floor(Vector2f(c*60,r*60),"images/floor.png");
				entities.push_back(floor);
				Money* money = new Money(Vector2f(c*60,r*60), "images/coin.png");
				entities.push_back(money);
			}
			
			if (TileMap[r][c] == 'k') {
				Wall* wall = new Wall(Vector2f(c*60,r*60),"images/floor.png");
				entities.push_back(wall);
			}
			if (TileMap[r][c] == 'g') {
				Floor* floor = new Floor(Vector2f(c*60,r*60),"images/floor.png");
				entities.push_back(floor);
			}
		}
	}
}
Map::Map() {
	init();
}
void Map::draw(RenderWindow &window) {
	for(auto it = entities.begin(); it != entities.end();it++){
		window.draw((*it)-> getSprite());
	}
	window.draw(player->getSprite());
}
void Map::update() {
	player->update();
}
Player* Map::getPlayer() {
	return player;
}