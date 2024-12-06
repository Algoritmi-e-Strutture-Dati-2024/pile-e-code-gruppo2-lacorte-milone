#include <iostream>
#include <stdexcept>
using namespace std;

template <typename T, int MAX_DIMENSIONE>
class Pila {
private:
    T array[MAX_DIMENSIONE];  // Array statico
    int elementi;             // Numero di elementi attualmente nella pila

public:
    Pila() : elementi(0) {}

    void aggiungi(T elem) {  // push
        if (elementi == MAX_DIMENSIONE) {
            throw overflow_error("La pila è piena.");
        }
        array[elementi++] = elem;
    }

    T rimuovi() {  // pop
        if (vuota()) {
            throw out_of_range("La pila è vuota.");
        }
        return array[--elementi];
    }

    T cima() {  // top
        if (vuota()) {
            throw out_of_range("La pila è vuota.");
        }
        return array[elementi - 1];
    }

    bool vuota() {  // isEmpty
        return elementi == 0;
    }

    int dimensione() {  // size
        return elementi;
    }
};

