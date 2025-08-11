#ifndef SHAPEFACTORY_H
#define SHAPEFACTORY_H
#include "Shape.h"
#include "Canvas.h"
#include <vector>


class ShapeFactory {

    protected:
        virtual Shape* createShape(int l, int w, std::string c, int posx, int posy, std::string text) const = 0;
        virtual void toString() const = 0;
    public:
        friend class Canvas;
};

#endif // SHAPEFACTORY_H