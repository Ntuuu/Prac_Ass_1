#ifndef CARETAKER_H
#define CARETAKER_H

#include "Memento.h"

class Caretaker {
    private:
        Memento* memento;
    public:
        Caretaker(Memento* m) : memento(m) {}
        Memento* getMemento() const { return memento; }
};

#endif // CARETAKER_H