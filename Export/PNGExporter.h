#ifndef PNGExporter_H
#define PNGExporter_H
#include "ExportCanvas.h"

class PNGExporter : public ExportCanvas {
    private:
        void prepareCanvas(Canvas* canvas) override;
        void renderElements(Canvas* canvas) override;
        void saveToFile(std::string &filename, Canvas* canvas) override;
};

#endif // PNGExporter_H