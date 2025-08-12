#include "Canvas.h"

// Canvas::Canvas(std::vector<Shape*> shapes) {
//     this->shapes = shapes;
// }


Canvas::~Canvas(){
    if(!this->shapes.empty()){
        // this->shapes.clear();
        for (auto shape : this->shapes) {
            delete shape;
        }
    }
}

void Canvas::addShape(Shape* shape) {
    // this->shapes.insert(this->shapes.end(), shapes.begin(), shapes.end());
    this->shapes.push_back(shape);
}

std::vector<Shape*> Canvas::getShapes() const {
    return shapes;
}

void Canvas::editShape(Shape* shape, int l, int w, std::string colour, int posx, int posy) {
    // Find the shape in the canvas and edit its properties
    for (auto& s : shapes) {
        if (s == shape) {
            s->setLength(l);
            s->setWidth(w);
            s->setColor(colour);
            s->setPosition(posx, posy);
            break;
        }
    }
}

void Canvas::deleteShape(Shape* shape) {
    for (auto it = shapes.begin(); it != shapes.end(); ++it) {
        if (*it == shape) {
            delete *it;  // Free memory
            shapes.erase(it);  // Remove from vector
            break;
        }
    }
}

// void deleteShape(Shape* shapes);