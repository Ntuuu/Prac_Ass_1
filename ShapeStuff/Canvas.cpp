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

