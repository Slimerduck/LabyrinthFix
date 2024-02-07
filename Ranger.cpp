#include "Ranger.h"

void Ranger::init(){
    width = 60;
    height = 55;
}
Ranger::Ranger(Vector2f position, String imagePath) : Entity(imagePath){
    init();
    setPosition(position);
    setName("ranger");
    arrow = new Arrow(Vector2f(position.x - width, position.y + 20),"images/arrow.png");
    setTextureRect(IntRect(0,0,width,height));
    sprite.setScale(-1,1);
}
