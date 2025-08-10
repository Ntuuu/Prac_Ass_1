#ifndef SHAPEFACTORY.H
#define SHAPEFACTORY_H
#include "Shapes.h"


class ShapeFactory : Shapes {
    private:
        int shapeId;
    protected:
        virtual Shapes* createShape() = 0;
        virtual void toString();
};

#endif // SHAPEFACTORY_H