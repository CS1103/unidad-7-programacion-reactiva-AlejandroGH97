//
// Created by alejandro on 6/28/19.
//

#ifndef UNIDAD_7_PROGRAMACION_REACTIVA_ALEJANDROGH97_COMPONENT_H
#define UNIDAD_7_PROGRAMACION_REACTIVA_ALEJANDROGH97_COMPONENT_H

#include <functional>

class Event{
private:
    int x;
    int y;
public:
    Event(int x, int y):x{x},y{y}{}
    int getX(){return x;}
    int getY(){return y;}
};


class Component  {
    friend class Window;
protected:
    std::function<void(Event)> clickEvent;
    std::function<void(Event)> mouseMoveEvent;

public:
    void onClick(std::function<void(Event)> event);
    void onMouseMove(std::function<void(Event)> event);
    virtual void draw()=0;

};


#endif //UNIDAD_7_PROGRAMACION_REACTIVA_ALEJANDROGH97_COMPONENT_H
