#ifndef CANVAS_H
#define CANVAS_H
#include "Shape.h"
#include <vector>
#include "Memento.h"

class Canvas {
    private:
        std::vector<Shape> shapes;
        // Shape* shapes;
    public:
        Canvas();
        ~Canvas();
        void addShape(const Shape& shape);
        Memento* captureCurrent();
        void undoAction(Memento* prev);
};

#endif 