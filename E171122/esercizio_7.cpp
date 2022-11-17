// Scrivere un programma che chiede quanti alunni ci sono in una classe poi per ogni alunno fa inserire 5 voti e ne scrive la media.

#include <iostream>

using namespace std;

int main() {
    int n_alunni;

    cout << "Quanti alunni ci sono?\n";
    cin >> n_alunni;

    for (int i = 0; i < n_alunni; i++) {
        float sum = 0;
        cout << "--- Alunno " << i + 1 << " ---\n";
        for (int j = 0; j < 5; j++) {
            float v = -1;

            while (v < 0 || v > 10) {
                cout << "Inserisci il voto n " << j+1 << endl;
                cin >> v;
            }

            sum = sum + v;
        }
        cout << "La media dell'alunno e' " << sum/5 << endl;
    }
}
