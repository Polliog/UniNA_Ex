//Scrivere un programma che permetta di calcolare il fattoriale di un numero naturale inserito dall'utente

#include <iostream>
using namespace std;

int main() {
    int n;
    int r = 1;

    cout << "Inserisci un numero naturale\n";
    cin >> n;

    if (n < 1) {
        cout << "Numero non valido\n";
        return 0;
    }

    for (int i = 0; i < n; i++) {
        r = r * (n-i);
    }

    cout << "Il risultato e': \n";
    cout << r;
}