#include "TextboxFactory.h"
#include "Textbox.h"

Shape* TextboxFactory::createShape(int l, int w, std::string c, int posx, int posy, std::string text) {
    return new Textbox(l, w, c, posx, posy, text);
}

void TextboxFactory::toString() {
    std::cout << "TextboxFactory: Creating a textbox shape." << std::endl;
}
