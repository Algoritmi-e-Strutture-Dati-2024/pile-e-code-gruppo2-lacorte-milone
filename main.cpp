#include <iostream>
#include "Pila.cpp"
#include "Coda.cpp"

using namespace std;

int main() {
    const int MAX_DIMENSIONE = 5;

    // Test della Pila
    Pila<int, MAX_DIMENSIONE> pila;

    pila.aggiungi(10);
    pila.aggiungi(20);
    pila.aggiungi(30);

    cout << "Elemento in cima alla pila: " << pila.cima() << endl;
    cout << "Dimensione della pila: " << pila.dimensione() << endl;

    cout << "Rimuovo elemento dalla pila: " << pila.rimuovi() << endl;
    cout << "Nuovo elemento in cima alla pila: " << pila.cima() << endl;

    if (pila.vuota()) {
        cout << "La pila è vuota" << endl;
    } else {
        cout << "La pila non è vuota" << endl;
    }

    // Test della Coda
    Coda<int, MAX_DIMENSIONE> coda;

    coda.aggiungi(100);
    coda.aggiungi(200);
    coda.aggiungi(300);

    cout << "Elemento in testa alla coda: " << coda.inTesta() << endl;
    cout << "Dimensione della coda: " << coda.dimensione() << endl;

    cout << "Rimuovo elemento dalla coda: " << coda.rimuovi() << endl;
    cout << "Nuovo elemento in testa alla coda: " << coda.inTesta() << endl;

    if (coda.vuota()) {
        cout << "La coda è vuota" << endl;
    } else {
        cout << "La coda non è vuota" << endl;
    }

    return 0;
}
