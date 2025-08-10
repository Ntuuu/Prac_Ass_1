#include "Canvas.h"

Canvas::Canvas(){

    this->shapes = NULL;

}

Canvas::~Canvas(){
    if(this->shapes != NULL){
        delete[] this->shapes;
        this->shapes = NULL;
    }
}

// Canvas::Canvas(const Canvas& other){

// }