#include <iostream>
#include <stdexcept>
using namespace std;

template <typename T>
class Coda {
private:
    struct Nodo {
        T dato;
        Nodo* prossimo;
        Nodo(T valore, Nodo* ptr = nullptr) : dato(valore), prossimo(ptr) {}
    };

    Nodo* testa;
    Nodo* coda;
    int elementi;

public:
    Coda() : testa(nullptr), coda(nullptr), elementi(0) {}
    ~Coda() {
        while (!isEmpty()) {
            dequeue();
        }
    }

    void enqueue(T elem) {
        Nodo* nuovoNodo = new Nodo(elem);
        if (isEmpty()) {
            testa = coda = nuovoNodo;
        } else {
            coda->prossimo = nuovoNodo;
            coda = nuovoNodo;
        }
        elementi++;
    }

    T dequeue() {
        if (isEmpty()) {
            throw out_of_range("La coda è vuota.");
        }
        Nodo* nodoDaRimuovere = testa;
        T valore = nodoDaRimuovere->dato;
        testa = testa->prossimo;
        if (!testa) {
            coda = nullptr;
        }
        delete nodoDaRimuovere;
        elementi--;
        return valore;
    }

    T front() {
        if (isEmpty()) {
            throw out_of_range("La coda è vuota.");
        }
        return testa->dato;
    }

    bool isEmpty() {
        return testa == nullptr;
    }

    int size() {
        return elementi;
    }
};
