#include <iostream>
#include "Circle.h"
#include "Window.h"
#include "Rectangle.h"

int main() {
    Window window;
    Circle c1(5,5,1);
    Rectangle r1(8,8,2,4);
//    c1.onClick([](Event e){
//        std::cout<<"Circle found click @:\nX: "<<e.getX()<<" Y: "<<e.getY()<<std::endl;
//    });

    window.addComponent(&c1);
    window.addComponent(&r1);
    window.run();
    window.removeComponent(&r1);
    window.run();


    return 0;
}