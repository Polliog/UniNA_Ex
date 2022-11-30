//Scrivere un programma che permetta di stampare a video l'indirizzo
// in memoria di una certa variabile intera a e di porre a 0 il valore
// tramite puntantore

#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int *p = &a;

    cout << "Indirizzo di a: " << &a << endl;
    cout << "Indirizzo di p: " << p << endl;
    cout << "Valore di a: " << a << endl;
    cout << "Valore di p: " << *p << endl;

    *p = 0;

    cout << "Valore di a: " << a << endl;
    cout << "Valore di p: " << *p << endl;
}
