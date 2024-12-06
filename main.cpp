#include <iostream>
#include "Pila.cpp"
#include "Coda.cpp"

using namespace std;

int main() {
  
    Pila<int> pila;

    
    pila.push(30);
    pila.push(50);
    pila.push(60);

  
    cout<< "L'elemento in cima alla pila: " << pila.top();
    cout<< "La dimensione della pila: " << pila.size();

    cout<< "Rimuovo elemento dalla pila: " << pila.pop();
    cout<< "Nuovo elemento in cima alla pila: " << pila.top();
    cout<< "Dimensione della pila dopo il pop: " << pila.size();
  
    if (pila.isEmpty()) {
    cout<< "La pila è vuota";
    } else {
    << "La pila non è vuota";
    }


    Coda<int> coda;

    coda.enqueue(200);
    coda.enqueue(400);
    coda.enqueue(700);

 
    cout<< "Elemento in testa alla coda: " << coda.front();
    cout<< "Dimensione della coda: " << coda.size();

    cout<< "Rimuovo elemento dalla coda: " << coda.dequeue();
    cout<< "Nuovo elemento in testa alla coda: " << coda.front();
    cout<< "Dimensione della coda dopo il dequeue: " << coda.size();

    if (coda.isEmpty()) {
    cout<< "La coda è vuota";
    } else {
    cout<< "La coda non è vuota";
    }


    return 0;
}
