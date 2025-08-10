#ifndef SHAPEFACTORY_H
#define SHAPEFACTORY_H
#include "Shape.h"

class Shape; // forward decleration

class ShapeFactory {
    private:
        int shapeId;
    protected:
        virtual Shape* createShape() = 0;
        virtual void toString();
};

#endif // SHAPEFACTORY_H