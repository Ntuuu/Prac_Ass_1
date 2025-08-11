#include "PDFExporter.h"

void PDFExporter::prepareCanvas(Canvas* canvas) {
    // Prepare the PDF canvas
    std::cout << "Preparing PDF Canvas" << std::endl;
    for (int i = 0; i < canvas->getShapes().size(); ++i) {
        // Prepare each shape for the PDF
        std::cout <<  "-";
    }
}

void PDFExporter::renderElements(Canvas* canvas) {
    // Render elements on the PDF
    std::cout << "Rendering elements on PDF Canvas" << std::endl;
    for (const auto& shape : canvas->getShapes()) {
        // Render each shape on the PDF
        std::cout <<  "-";
    
    }
}

void PDFExporter::saveToFile(std::string& filename, Canvas* canvas) {
    // Your implementation here
}