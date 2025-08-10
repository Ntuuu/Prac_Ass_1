#ifndef EXPORTVANCAS_H
#define EXPORTCANVAS_H
#include "Canvas.h"

class ExportCanvas {
    private:
        Canvas* canvas;
        void prepareCanvas();
        void renderElements();
        virtual void saveToFile();
    public:
        void exportToFile();
};

#endif // export canvas.h