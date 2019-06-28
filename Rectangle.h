//
// Created by alejandro on 6/28/19.
//

#ifndef UNIDAD_7_PROGRAMACION_REACTIVA_ALEJANDROGH97_RECTANGLE_H
#define UNIDAD_7_PROGRAMACION_REACTIVA_ALEJANDROGH97_RECTANGLE_H


#include "Component.h"

class Rectangle : public Component{
private:
    int x;
    int y;
    int width;
    int height;
public:
    Rectangle(int x, int y, int width, int height);
    void draw() override;
};


#endif //UNIDAD_7_PROGRAMACION_REACTIVA_ALEJANDROGH97_RECTANGLE_H
