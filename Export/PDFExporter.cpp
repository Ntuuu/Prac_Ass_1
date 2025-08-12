#include "PDFExporter.h"

void PDFExporter::prepareCanvas(Canvas* canvas) {
    // Prepare the canvas for export
    int height = 0;
    int width = 0;
    for (const auto& shape : canvas->getShapes()) {
        height += shape->getHeight();
        width += shape->getLength();
    }

    buffer.assign(height, std::string(width, ' '));

    // for pdf and png, we can change the way in which height and width are
    // calculated as that would change the space in which the shapes are rendered
}

void PDFExporter::renderElements(Canvas* canvas) {
    // Render elements on the canvas
    // std::cout << "Rendering elements on canvas" << std::endl;
    for (const auto& shape : canvas->getShapes()) {
        // Here we would render each shape onto the buffer
        // For simplicity, we will just simulate rendering by adding a placeholder
        int posX = shape->position_x;
        int posY = shape->position_y;
        for (int i = 0; i < shape->getHeight(); ++i) {
            for (int j = 0; j < shape->getLength(); ++j) {
                if (posY + i < buffer.size() && posX + j < buffer[0].size()) {
                    auto temp = shape->draw();
                    if ((i < temp.size() && j < temp[0].size()) || temp[i][j] != ' ') {
                        buffer[posY + i][posX + j] = temp[i][j];
                    }
                }
            }
        }
    }
}


void PDFExporter::saveToFile(std::string &filename, Canvas* canvas) {
    std::ofstream outFile(filename);
    std::cout << "Preparing canvas for PDF export" << std::endl;
    if (outFile) {
        for (const auto& line : buffer) {
            outFile << line << std::endl;
        }
        outFile.close();
    }
}
