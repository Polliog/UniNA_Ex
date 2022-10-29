/*
 * Leggere una sequenza  di numeri terminati da un numero negativo e scrivere in output il massimo è il minimo tra i valori letti
 */

#include <iostream>
using namespace std;

int main() {
    int max = 0;
    int min = 0;
    int n = 0;

    while (n >= 0) {
        cout << "Inserisci un numero: ";
        cin >> n;

        if (n <= 0) break;
        if (n > max) {
            max = n;
        }
        if (n < min || min == 0) {
            min = n;
        }
    }

    cout << "Il massimo e': " << max << endl;
    cout << "Il minimo e': " << min << endl;
    return 0;
}