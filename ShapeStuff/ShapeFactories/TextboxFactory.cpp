#include "TextboxFactory.h"
#include "Textbox.h"

Shape* TextboxFactory::createShape(int l, int w, std::string c, int posx, int posy, std::string text) const {
    return new Textbox(l, w, c, posx, posy, text);
}

void TextboxFactory::toString() const {
    std::cout << "TextboxFactory: Creating a textbox shape." << std::endl;
}
