#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include <vector>
#include <string>

// beginning of implementation of memento design pattern
class Shape; // Forward declaration of Shapes class

class Shape {
    protected:
        int length;
        int width;
        std::string color;
        int position_x;
        int position_y;
    public:
        Shape(int l, int w, std::string c, int posx, int posy);
        // ~Shape();
};


#endif
