// calcolare l'inverso di un numero, controllando che il numero sia diverso da zero
#include <iostream>
using namespace std;

int main() {
    float n = 0;
    cout << "Inserisci un numero: ";
    cin >> n;
    if (n != 0) {
        cout << "Inverso: " << 1.0 / n << endl;
    } else {
        cout << "Non posso calcolare l'inverso di zero" << endl;
    }
    return 0;
}