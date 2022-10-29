/*
 * Leggere una sequenza di numeri terminati da un numero negativo e stampare in output il numero di numeri pari letti e il numero dispari letti
 */

#include <iostream>
using namespace std;

int main() {
    int n, pari = 0, dispari = 0;
    cout << "Inserisci un numero: ";
    cin >> n;
    while (n >= 0) {
        if (n % 2 == 0) {
            pari++;
        } else {
            dispari++;
        }
        cout << "Inserisci un numero: ";
        cin >> n;
    }
    cout << "Pari: " << pari << endl;
    cout << "Dispari: " << dispari << endl;
    return 0;
}