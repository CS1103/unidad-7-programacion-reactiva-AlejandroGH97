//
// Created by alejandro on 6/28/19.
//

#include "Window.h"
#include <algorithm>
#include <iostream>

void Window::run() {
    char option;
    int _x;
    int _y;
    while(option != 'X'){
        std::cin>>option;
        switch (option) {
            case 'C':
                std::cout<<"x coord: ";
                std::cin >> _x;
                std::cout<<"y coord: ";
                std::cin >> _y;
                for (auto comt: controls) {
                    comt->clickEvent(Event{_x, _y});
                }
                break;
            case 'M':
                std::cout<<"x coord: ";
                std::cin >> _x;
                std::cout<<"y coord: ";
                std::cin >> _y;
                for (auto comt: controls) {
                    comt->mouseMoveEvent(Event{_x, _y});
                }
                break;
            case 'X':
                std::cout<<"Exiting program...";
                break;
        }
    }
}

void Window::addComponent(Component* comp) {
    controls.push_back(comp);
}

void Window::removeComponent(Component* comp) {
    auto item = std::find(begin(controls),end(controls),comp);
    if(item!=end(controls)){
        controls.erase(item);
    }
}
