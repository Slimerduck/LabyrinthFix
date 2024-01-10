#pragma once
#include<SFML/Graphics.hpp>
#include "Player.h"
#include "Money.h"
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
	Money* coin;
	void update();
private:
	Image mapImage;
	Texture mapTexture;
	Sprite mapSprite;
	void init();
	Player * player;

	sf::String TileMap[HEIGHT_MAP] = {

		"kkkkkkkkkkkkkkkkkkkkk",

		"kggggggggmggggkgmkgmk",
		
		"kgggggggggggggkggkggk",
		
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
