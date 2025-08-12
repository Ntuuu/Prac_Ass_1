#ifndef TEXTBOX_H
#define TEXTBOX_H
#include "Shape.h"

class Textbox : public Shape {
    private:
        std::string text;
    public:
        Textbox(int l, int w, std::string c, int posx, int posy, std::string text);
        std::vector<std::string> draw() const override;
        std::string toString() const override;
        Textbox* clone() const {
            return new Textbox(*this);
        }
};

#endif // TEXTBOX_H