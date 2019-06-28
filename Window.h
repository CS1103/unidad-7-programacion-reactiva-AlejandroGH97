//
// Created by alejandro on 6/28/19.
//

#ifndef UNIDAD_7_PROGRAMACION_REACTIVA_ALEJANDROGH97_WINDOW_H
#define UNIDAD_7_PROGRAMACION_REACTIVA_ALEJANDROGH97_WINDOW_H

#include <vector>
#include "Component.h"

class Window {
private:
    std::vector<Component*> controls;
public:
    void run();
    void addComponent(Component* comp);
    void removeComponent(Component* comp);
};


#endif //UNIDAD_7_PROGRAMACION_REACTIVA_ALEJANDROGH97_WINDOW_H
