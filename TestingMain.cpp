// #include "ExportCanvas.h"
#include "Shape.h"
#include "Canvas.h"
#include "Textbox.h"
#include "Rectangle.h"
#include "Square.h"
#include "ShapeFactory.h"
#include "RectangleFactory.h"
#include "SquareFactory.h"
#include "TextboxFactory.h"
#include "PDFExporter.h"
#include "PNGExporter.h"
#include "Menu.h"

int main () {
    PDFExporter exporter;
    Canvas canvas;
    ShapeFactory factory;
    std::string filename = "output.txt";

    Menu menu = Menu(&canvas, &exporter, &factory);
    menu.run(filename, &factory);

    // Create some shapes and add them to the canvas
    // Textbox* textbox = new Textbox(5, 5, "red", 0, 0, "hello world");
    // Rectangle* rectangle = new Rectangle(5, 5, "blue", 5, 5);
    // Square* square = new Square(10, "green", 12, 12);

    // canvas.addShape(textbox);
    // canvas.addShape(rectangle);
    // canvas.addShape(square);

    // std::string filename = "output.txt";
    // exporter.exportToFile(&canvas, filename);

    // Canvas canvas2;

    // // prototype testing
    // Textbox* textbox2 = textbox->clone();
    // Rectangle* rectangle2 = rectangle->clone();
    // Square* square2 = square->clone();

    // canvas2.addShape(textbox2);
    // canvas2.addShape(rectangle2);
    // canvas2.addShape(square2);

    // // factory testing
    // TextboxFactory tFactory;
    // RectangleFactory rFactory;
    // SquareFactory sFactory;

    // Shape* textbox3 = tFactory.createShape(5,5, "red", 0, 0, "Hello");
    // Shape* rectangle3 = rFactory.createShape(10, 5, "blue", 0, 5, "");
    // Shape* square3 = sFactory.createShape(5, 5, "green", 12, 12, "");

    // canvas.addShape(textbox3);
    // canvas.addShape(rectangle3);
    // canvas.addShape(square3);

    // Export the canvas to a file

    return 0;
}