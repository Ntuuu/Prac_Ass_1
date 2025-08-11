#ifndef PDFEXPORTER_H
#define PDFEXPORTER_H
#include "ExportCanvas.h"

class PDFExporter : public ExportCanvas {
    private:
        void prepareCanvas(Canvas* canvas) override;
        void renderElements(Canvas* canvas) override;
        void saveToFile(std::string &filename, Canvas* canvas) override;
};

#endif // PDFEXPORTER_H