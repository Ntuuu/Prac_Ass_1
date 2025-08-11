#ifndef EXPORTVANCAS_H
#define EXPORTCANVAS_H
#include "Canvas.h"
#include <fstream>

class ExportCanvas {
    private:
        std::vector<std::string> buffer;
        Canvas* canvas;
        virtual void prepareCanvas(Canvas* canvas);
        virtual void renderElements(Canvas* canvas);
        virtual void saveToFile(std::string &filename, Canvas* canvas);
    public:
        void exportToFile(Canvas* canvas, std::string &filename);
};

#endif // export canvas.h