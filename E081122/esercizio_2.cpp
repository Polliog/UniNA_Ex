/*
 * Su scriva un programma che effettui il prodotto scalare reali definiti dall'utente
 */

#include <iostream>

using namespace std;


typedef int list[150];

int main() {
    list v1 = {};
    list v2 = {};

    int mod_v = 0;

    cout << "Inserisci il valore delle 3 componenti (x,y,z) del primo vettore\n";
    cin >> v1[0] >> v1[1] >> v1[2];

    cout << "Inserisci il valore delle 3 componenti (x,y,z) del secondo vettore\n";
    cin >> v2[0] >> v2[1] >> v2[2];

    cout << "Il valore del prodotto vettoriale tra i 2 vettori e': " << v1[0] * v2[0] + v1[1] * v2[1] + v1[2] * v2[2];
    return 0;
}