//Scrivere un programma che richiede all'utente tre numeri reali e li visualizza in ordine crescente.

#include <iostream>
using namespace std;

int main() {
    float list[3] = {};

    cout << "Inserisci 3 numeri reali\n";
    cin >> list[0] >> list[1] >> list[2];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (list[i] < list[j]) {
                float temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }

    cout << "I numeri in ordine crescente sono:\n";
    for (int i = 0; i < 3; i++) {
        cout << list[i] << endl;
    }
}