#ifndef SHAPEFACTORY_H
#define SHAPEFACTORY_H
#include "Shape.h"


class ShapeFactory {
    private:
        int shapeId;
    protected:
        virtual Shape* createShape() = 0;
        virtual void toString();
    public:
        friend class Canvas;
};

#endif // SHAPEFACTORY_H