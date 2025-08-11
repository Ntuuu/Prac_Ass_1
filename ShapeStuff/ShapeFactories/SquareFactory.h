#ifndef SquareFactory_H
#define SquareFactory_H
#include "ShapeFactory.h"
#include "Square.h"

class SquareFactory : public ShapeFactory {
    public:
        Shape* createShape(int side, int side2, std::string color, int posx, int posy, std::string text) const override;
        void toString() const override;

    };
#endif // SquareFactory