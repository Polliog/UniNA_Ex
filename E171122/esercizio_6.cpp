//Creare un programma che ogni volta che viene inserito un numero, se è pari stampa tante lettere ‘A’
// quanto vale la metà di quel numero, se è dispari stampa tante lettere ‘Z’ quanto vale quel numero,
// il programma si ferma se viene inserito zero o un numero negativo.

#include <iostream>
using namespace std;

int main() {
    int n = 1;

    while (n > 0) {
        cout << "Inserisci un numero:\n";
        cin >> n;

        if (n % 2 == 0) {
            for (int i = 0; i < n/2; i++) {
                cout << "A\n";
            }
        } else {
            for (int i = 0; i < n; i++) {
                cout << "Z\n";
            }
        }
    }
}