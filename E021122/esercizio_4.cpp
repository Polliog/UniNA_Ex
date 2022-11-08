// scrivere un programma che, dati due numeri vada a verificare che il rpimo numero e' multiplico del secondo

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Inserisci il primo numero: ";
    cin >> a;
    cout << "Inserisci il secondo numero: ";
    cin >> b;
    if (a % b == 0) {
        cout << a << " e' multiplo di " << b << endl;
    } else {
        cout << a << " non e' multiplo di " << b << endl;
    }
    return 0;
}
