#include <iostream>
#include <stdexcept>
using namespace std;

template <typename T, int MAX_DIMENSIONE>
class Coda {
private:
    T array[MAX_DIMENSIONE];  // Array statico
    int testa;                // Indice del primo elemento
    int fine;                 // Indice della prossima posizione libera
    int elementi;             // Numero di elementi nella coda

public:
    Coda() : testa(0), fine(0), elementi(0) {}

    void aggiungi(T elem) {  // enqueue
        if (elementi == MAX_DIMENSIONE) {
            throw overflow_error("La coda è piena.");
        }
        array[fine] = elem;
        fine = (fine + 1) % MAX_DIMENSIONE;  // Movimento circolare
        elementi++;
    }

    T rimuovi() {  // dequeue
        if (vuota()) {
            throw out_of_range("La coda è vuota.");
        }
        T valore = array[testa];
        testa = (testa + 1) % MAX_DIMENSIONE;  // Movimento circolare
        elementi--;
        return valore;
    }

    T inTesta() {  // front
        if (vuota()) {
            throw out_of_range("La coda è vuota.");
        }
        return array[testa];
    }

    bool vuota() {  // isEmpty
        return elementi == 0;
    }

    int dimensione() {  // size
        return elementi;
    }
};

