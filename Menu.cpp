// Menu.cpp
#include "Menu.h"

void Menu::showMenu() {
    std::cout << "\n=== Shape Painter Menu ===\n";
    std::cout << "input options:\n";
    std::cout << "type: 'rectangle', 'square', 'textbox', etc.\n";
    std::cout << "print canvas: 'print' \n";
    std::cout << "exit program: 'exit' \n";
}

void Menu::handleChoice(const std::string &input, std::string &filename, ShapeFactory* factory) {
    // switch (choice) {
    //     case 1: addRectangle(factory); break;
    //     case 2: addSquare(factory); break;
    //     case 3: addTextbox(factory); break;
    //     case 4:
    //         exporter->exportToFile(canvas, filename);
    //         // exporter->prepareCanvas();
    //         // exporter->renderElements(canvas);
    //         // exporter->saveToFile("output.txt");
    //         break;
    //     case 5:
    //         std::cout << "Exiting...\n";
    //         exit(0);
    //     default:
    //         std::cout << "Invalid choice, try again.\n";
    // }

    if (input == "exit") {
        std::cout << "exiting ..\n" << std::endl;
        exit(0);
    } else if (input == "print") {
        exporter->exportToFile(canvas, filename);
    } else {
        addShape(factory, input);
    }
}


void Menu::addShape(ShapeFactory* factory, const std::string &type) {
    if (shapeFactories.find(type) == shapeFactories.end()) {
        std::cout << "Unknown shape type: " << type << "\n";
        return;
    }
    
    int w, h, x, y;
    std::string colour, text;

    std::cout << "Width: "; std::cin >> w;
    std::cout << "Height: "; std::cin >> h;
    std::cout << "Colour: "; std::cin >> colour;
    std::cout << "Position X: "; std::cin >> x;
    std::cout << "Position Y: "; std::cin >> y;

    auto it = shapeFactories.find(type);
    if (it != shapeFactories.end()) {
        if (type == "textbox") {
            std::cout << "Text: ";
            std::cin.ignore();
            std::getline(std::cin, text);
        } else {
            text = "";
        }
        factory = it->second;
        Shape* shape = factory->createShape(w, h, colour, x, y, text);
        canvas->addShape(shape);
    } else {
        std::cout << "Unknown shape type: " << type << "\n";
    }
}

// void Menu::addRectangle(ShapeFactory* factory) {
//     int w, h, x, y;
//     std::string colour;
//     std::cout << "Width: "; std::cin >> w;
//     std::cout << "Height: "; std::cin >> h;
//     std::cout << "Colour: "; std::cin >> colour;
//     std::cout << "Position X: "; std::cin >> x;
//     std::cout << "Position Y: "; std::cin >> y;

//     factory = new RectangleFactory();
//     Shape* rect = factory->createShape(w, h, colour, x, y, "");
//     canvas->addShape(rect);
//     std::cout << "Rectangle added!\n";
// }

// void Menu::addSquare(ShapeFactory* factory) {
//     int size, x, y;
//     std::string colour;
//     std::cout << "Size: "; std::cin >> size;
//     std::cout << "Colour: "; std::cin >> colour;
//     std::cout << "Position X: "; std::cin >> x;
//     std::cout << "Position Y: "; std::cin >> y;

//     factory = new SquareFactory();
//     Shape* sq = factory->createShape(size, size, colour, x, y, "");
//     canvas->addShape(sq);
//     std::cout << "Square added!\n";
// }

// void Menu::addTextbox(ShapeFactory* factory) {
//     int w, h, x, y;
//     std::string colour;
//     std::string text;
//     std::cout << "Width: "; std::cin >> w;
//     std::cout << "Height: "; std::cin >> h;
//     std::cout << "Colour: "; std::cin >> colour;
//     std::cout << "Position X: "; std::cin >> x;
//     std::cout << "Position Y: "; std::cin >> y;
//     std::cout << "Text: ";
//     std::cin.ignore();
//     std::getline(std::cin, text);

//     factory = new TextboxFactory();
//     Shape* tb = factory->createShape(w, h, colour, x, y, text);
//     canvas->addShape(tb);
//     std::cout << "Textbox added!\n";
// }

void Menu::run(std::string &filename, ShapeFactory* factory) {
    while (true) {
        showMenu();
        std::string choice;
        std::cin >> choice;
        handleChoice(choice, filename, factory);
    }
}
