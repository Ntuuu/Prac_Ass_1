// Menu.h
#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <string>
#include <map>
#include "Canvas.h"
#include "ExportCanvas.h"
#include "RectangleFactory.h"
#include "SquareFactory.h"
#include "TextboxFactory.h"

class Menu {
public:
    Menu(Canvas* c, ExportCanvas* e, ShapeFactory* f) : canvas(c), exporter(e), factory(f) {
        // options = { "Add Shape", "Print Canvas", "Exit" };
        this->canvas = canvas;
        this->exporter = exporter;
        this->factory = factory;
        shapeFactories["rectangle"] = new RectangleFactory();
        shapeFactories["square"]    = new SquareFactory();
        shapeFactories["textbox"]   = new TextboxFactory();
    }
    void run(std::string &filename, ShapeFactory* factory);

private:
    Canvas* canvas;
    ExportCanvas* exporter;
    std::map<std::string, ShapeFactory*> shapeFactories;
    ShapeFactory* factory;
    void showMenu();
    void handleChoice(const std::string &input, std::string &filename, ShapeFactory* factory);
    void deleteShape();
    void addShape(ShapeFactory* factory, const std::string &type);
    void editShape(ShapeFactory* factory);
    // void addRectangle(ShapeFactory* factory);
    // void addSquare(ShapeFactory* factory);
    // void addTextbox(ShapeFactory* factory);
};

#endif
