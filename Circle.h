//
// Created by alejandro on 6/28/19.
//

#ifndef UNIDAD_7_PROGRAMACION_REACTIVA_ALEJANDROGH97_CIRCLE_H
#define UNIDAD_7_PROGRAMACION_REACTIVA_ALEJANDROGH97_CIRCLE_H


#include "Component.h"


class Circle : public Component {
private:
    int x;
    int y;
    int radius;
public:
    Circle(int x, int y, int radius);
    void draw() override;
};


#endif //UNIDAD_7_PROGRAMACION_REACTIVA_ALEJANDROGH97_CIRCLE_H
