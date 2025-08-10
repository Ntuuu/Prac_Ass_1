#include "Canvas.h"

Canvas::Canvas(){

    // this->shapes = NULL;
    this->shapes.clear();

}

Canvas::~Canvas(){
    if(!this->shapes.empty()){
        this->shapes.clear();
    }
}

void Canvas::addShape(const Shape& shape) {
    this->shapes.push_back(shape);
}

