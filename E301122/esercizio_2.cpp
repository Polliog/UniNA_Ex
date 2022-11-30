//Scrivere un programma che permetta di stampare a video l'indirizzo
// in memoria di una certa variabile intera a e di porre a 0 il valore
// tramite puntantore

// Con riferimento all'esercizio precedente modificare il valore della variabile a con una seconda variabile puntatore

#include <iostream>
using namespace std;

int main() {
    int *pa,*pb, a;

    pa = &a; // Indirizzo di a
    pb = pa; // Indirizzo di a tramite pa (puntatore)

    *pb = 10; // Modifica valore di a tramite pb (puntatore)

    cout << a << endl;
}
