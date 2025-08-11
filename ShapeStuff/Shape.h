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
        
    public:
        int position_x;
        int position_y;
        // virtual void draw(std::vector<std::string> &buffer) const = 0;
        virtual std::vector<std::string> draw() const = 0;
        Shape(int l, int w, std::string c, int posx, int posy);
        int getHeight() const;
        int getLength() const;
        // ~Shape();
};


#endif
