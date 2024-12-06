#include <iostream>
#include <stdexcept>
using namespace std;

template <typename T>
class Pila {
private:
    struct Nodo {
        T dato;
        Nodo* prossimo;
        Nodo(T valore, Nodo* ptr = nullptr) : dato(valore), prossimo(ptr) {}
    };

    Nodo* cima;
    int elementi;

public:
    Pila() : cima(nullptr), elementi(0) {}
    ~Pila() {
        while (!isEmpty()) {
            pop();
        }
    }

    void push(T elem) {
        Nodo* nuovoNodo = new Nodo(elem, cima);
        cima = nuovoNodo;
        elementi++;
    }

    T pop() {
        if (isEmpty()) {
            throw out_of_range("La pila è vuota.");
        }
        Nodo* nodoDaRimuovere = cima;
        T valore = nodoDaRimuovere->dato;
        cima = cima->prossimo;
        delete nodoDaRimuovere;
        elementi--;
        return valore;
    }

    T top() {
        if (isEmpty()) {
            throw out_of_range("La pila è vuota.");
        }
        return cima->dato;
    }

    bool isEmpty() {
        return cima == nullptr;
    }

    int size() {
        return elementi;
    }
};
