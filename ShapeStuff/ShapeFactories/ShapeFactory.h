#ifndef SHAPEFACTORY_H
#define SHAPEFACTORY_H
#include "Shape.h"
#include "Canvas.h"
#include <vector>


class ShapeFactory {
        
    public:
        friend class Canvas;
        virtual Shape* createShape(int l, int w, std::string c, int posx, int posy, std::string text) const;
        virtual void toString() const;
};

#endif // SHAPEFACTORY_H