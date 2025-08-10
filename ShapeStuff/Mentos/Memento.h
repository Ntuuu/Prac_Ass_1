#ifndef MEMENTO_H
#define MEMENTO_H
#include "Shape.h"

class Memento {
    // Implementation of Memento class
    private:
        Shape* shapes;
    public:
        Memento(Shape* elements) : shapes(elements) {}
        Shape* getShapes() const { return shapes; }
        friend class Canvas;
};

#endif // MEMENTO_H