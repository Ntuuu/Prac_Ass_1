#ifndef PNGExporter_H
#define PNGExporter_H
#include "ExportCanvas.h"

class PNGExporter : public ExportCanvas {
    private:
        void saveToFile();
};

#endif // PNGExporter_H