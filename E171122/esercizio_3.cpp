//Scrivere un programma che legge due orari in ore minuti e secondi e dice quale orario viene prima.

#include <iostream>

using namespace std;

int main() {
    int h1 = -1, m1 = -1, s1 = -1, h2 = -1, m2 = -1, s2 = -1;

    while (h1 > 24 || h1 < 0) {
        cout << "Inserisci ora prima ora\n";
        cin >> h1;
    }

    while (m1 > 60 || m1 < 0) {
        cout << "Inserisci minuti prima ora\n";
        cin >> m1;
    }

    while (s1 > 60 || s1 < 0) {
        cout << "Inserisci secondi prima ora\n";
        cin >> s1;
    }

    while (h2 > 24 || h2 < 0) {
        cout << "Inserisci ora seconda ora\n";
        cin >> h2;
    }

    while (m2 > 60 || m2 < 0) {
        cout << "Inserisci minuti seconda ora\n";
        cin >> m2;
    }

    while (s2 > 50 || s2 < 0) {
        cout << "Inserisci secondi seconda ora\n";
        cin >> s2;
    }


    int st1, st2;

    st1 = h1 * 3600 + m1 * 60 + s1;
    st2 = h2 * 3600 + m2 * 60 + s2;

    if (st1 < st2) {
        cout << "La prima ora viene prima della seconda";
    } else {
        cout << "La seconda ora viene dopo o allo stesso momento";
    }
}