#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include <vector>
#include <string>

// beginning of implementation of memento design pattern
class Shape; // Forward declaration of Shapes class

class Shape {
    private:
        int length;
        int width;
        std::string color;
        int position_x;
        int position_y;
};


#endif
