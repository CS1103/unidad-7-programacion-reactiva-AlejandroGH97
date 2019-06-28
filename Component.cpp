//
// Created by alejandro on 6/28/19.
//

#include <iostream>
#include "Component.h"

void Component::onClick(std::function<void(Event)> event) {
    clickEvent = event;
}

void Component::onMouseMove(std::function<void(Event)> event) {
    mouseMoveEvent = event;
}
