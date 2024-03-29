#pragma once
#include<SFML/Graphics.hpp>
#include "Player.h"
#include "Money.h"
#include "Wall.h"
#include "Floor.h"
#include "Hp.h"
#include <list>
using namespace std;
using namespace sf;
const int WINDOW_HEIGHT = 720;
const int WINDOW_WIDTH = 1260;
const int HEIGHT_MAP = 12;
const int WIDTH_MAP = 21;
class Map {
public:
	Map();
	void draw(RenderWindow &window);
	Player* getPlayer();
	void update();
private:
	Image mapImage;
	void init();
	Player * player;
	list<Entity*> entities;

sf::String TileMap[HEIGHT_MAP] = {
"kkkkkkkkkkkkkkkkkkkkk",
"kggggggggmggggkgmkgmk",
"kggggghgghggggkggkggk",
"kgggggkkkkkgggkggkggk",
"kkkkkkkgmgkgggkggkggk",
"kgggggggggkgggkggkggk",
"kgggggggggkgggkggkggk",
"kggkkkkkkkkgggkggkggk",
"kggggggggggggggggkggk",
"kggggggmgggggggmggggk",
"kgggggggggggggggggggk",
"kmgkkkkkkkkkkkkkkkkkk"
};
};
