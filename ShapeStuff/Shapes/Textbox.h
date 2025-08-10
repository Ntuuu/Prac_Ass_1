#ifndef TEXTBOX_H
#define TEXTBOX_H
#include "Shape.h"

class Textbox : public Shape {
    private:
        int length;
        int width;
        std::string color;
        int position_x;
        int position_y;
        std::string text;

    public:
        Shape* clone() const {
            return new Textbox(*this);
        }
};

#endif // TEXTBOX_H