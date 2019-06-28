//
// Created by alejandro on 6/28/19.
//

#include "Circle.h"
#include <iostream>

auto click = [](Event e){
    std::cout<<"Circle found click @:\nX: "<<e.getX()<<" Y: "<<e.getY()<<std::endl;
};

auto move = [](Event e){
    std::cout<<"Circle saw mouse move to:\nX: "<<e.getX()<<" Y: "<<e.getY()<<std::endl;
};

Circle::Circle(int x, int y, int radius):x{x},y{y},radius{radius} {
    onClick(click);
    onMouseMove(move);
}

void Circle::draw() {
    std::cout<<"Circle on:\nX: "<<x<<" Y: "<<y<<" Radius: "<<radius<<std::endl;
}




