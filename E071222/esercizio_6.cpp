//verificare se un vettore e simmetrico

#include <iostream>

using namespace std;

int main() {
    int n;
    bool sim = true;

    cout << "Quanto e' grande la lista?\n";
    cin >> n;

    int v[n];

    for (int i = 0; i < n; i++) {
        cout << "Inserisci l'elemento n " << i + 1 << endl;
        cin >> v[i];
    }

    cout << "Elementi Inseriti" << endl;

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < n / 2; i++) {
        if (v[i] != v[(n - 1) - i]) {
            sim = false;
            break;
        }
    }

    if (sim) {
        cout << "Simmetrica" << endl;
    } else {
        cout << "Non simmetrica" << endl;
    }
}