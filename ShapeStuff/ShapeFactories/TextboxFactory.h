#ifndef TEXTBOXFACTORY_H
#define TEXTBOXFACTORY_H
#include "ShapeFactory.h"

class TextboxFactory : public ShapeFactory {
    public:
        Shape* createShape(int l, int w, std::string c, int posx, int posy, std::string text) const override;
        void toString() const override;

    };
#endif // TEXTBOXFACTORY