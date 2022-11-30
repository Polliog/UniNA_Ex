/*
 *  Scrivere un programma che permetta di acquisire in una stringa una sequenza di caratteri e di copiare, usando i puntatori,
 *  tutti i caratteri della stringa acquisita in un'altra, delle stesse dimensioni della prima
 */

#include <iostream>
using namespace std;

int main() {
    char stringa[100], stringa2[100];
    char *p = stringa, *p2 = stringa2;

    cout << "Inserisci una stringa:" << endl;
    cin >> stringa;

    for (int i = 0; i < 100; i++) {
        p2[i] = p[i];
    }

    cout << stringa2 << endl;

    return 0;
}
