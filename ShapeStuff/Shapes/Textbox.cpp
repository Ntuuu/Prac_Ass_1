#include "Textbox.h"

Textbox::Textbox(int l, int w, std::string c, int posx, int posy, std::string text)
    : Shape(l, w, c, posx, posy) {

        this->length = l;
        this->width = w;
        this->color = c;
        this->position_x = posx;
        this->position_y = posy;
        this->text = text;
    }

// std::vector<std::string> Textbox::draw() const { // run 1
//     // Initialize buffer as length (rows) × width (columns)
//     std::vector<std::string> buffer(length, std::string(width, ' '));

//     // Draw borders
//     for (int i = 0; i < length; ++i) {         // Rows (0 to length-1)
//         for (int j = 0; j < width; ++j) {      // Columns (0 to width-1)
//             if (i == 0 || i == length - 1 || j == 0 || j == width - 1) {
//                 buffer[i][j] = '+';  // Border
//             }
//         }
//     }

//     // Place text (centered vertically)
//     int textRow = length / 2;
//     int textCol = 1;  // Start at column 1 (avoid left border)
//     for (size_t k = 0; k < text.size() && textCol + (int)k < width - 1; ++k) {
//         buffer[textRow][textCol + k] = text[k];  // Fill text until end or right border
//     }

//     return buffer;
// }

std::vector<std::string> Textbox::draw() const {
    // Calculate required width (text length + 2 for borders)
    int required_width = text.empty() ? 2 : static_cast<int>(text.size()) + 2;
    int box_width = std::max(width, required_width);
    
    // Initialize buffer with proper dimensions
    std::vector<std::string> buffer(length, std::string(box_width, ' '));

    // Draw borders
    for (int i = 0; i < length; ++i) {
        for (int j = 0; j < box_width; ++j) {
            if (i == 0 || i == length - 1 || j == 0 || j == box_width - 1) {
                buffer[i][j] = '+';  // Border
            }
        }
    }

    // Place text (centered vertically)
    if (!text.empty()) {
        int textRow = length / 2;  // Middle row
        int textCol = 1;           // Start after left border
        
        for (size_t k = 0; k < text.size(); ++k) {
            if (textCol + static_cast<int>(k) < box_width - 1) {
                buffer[textRow][textCol + k] = text[k];
            }
        }
    }

    return buffer;
}

std::string Textbox::toString() const {
    // std::cout << "Textbox: " << text << std::endl;
    return "textbox";
}