#ifndef CANVAS_H
#define CANVAS_H
#include "Shape.h"
#include <vector>
#include "Memento.h"

class Canvas {
    private:
        std::vector<Shape*> shapes;
        // Shape* shapes;
    public:
        // Canvas(std::vector<Shape*> shapes);
        ~Canvas();
        void addShape(Shape* shape);
        std::vector<Shape*> getShapes() const;
        void toString() const;
        Memento* captureCurrent();
        void undoAction(Memento* prev);
};

#endif 