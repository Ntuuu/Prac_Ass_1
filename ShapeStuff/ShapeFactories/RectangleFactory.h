#ifndef RectangleFactory_H
#define RectangleFactory_H
#include "ShapeFactory.h"
#include "Rectangle.h"



class RectangleFactory : public ShapeFactory {
    public:
        Shape* createShape(int l, int w, std::string c, int posx, int posy, std::string text) const override;
        void toString() const;

    };
#endif // RectangleFactory