//
// Created by alejandro on 6/28/19.
//

#include <iostream>
#include "Rectangle.h"

auto click = [](Event e){
    std::cout<<"Rectangle found click @:\nX: "<<e.getX()<<" Y: "<<e.getY()<<std::endl;
};

auto move = [](Event e){
    std::cout<<"Rectangle saw mouse move to:\nX: "<<e.getX()<<" Y: "<<e.getY()<<std::endl;
};


void Rectangle::draw() {
    std::cout<<"Rectangle on:\nX: "<<x<<" Y: "<<y<<" Width: "<<width<<" Height: "<<height<<std::endl;

}

Rectangle::Rectangle(int x, int y, int width, int height):x{x},y{y},width{width},height{height}{
    onClick(click);
    onMouseMove(move);
}
