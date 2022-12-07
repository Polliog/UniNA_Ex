//ordinare un vettore tramite algoritmo tramite scambio
#include <iostream>

using namespace std;

int main() {
    int n;

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

    //insertion sort

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int temp = v[j];
            int temp2 = v[j + 1];
            if (temp > temp2) {
                v[j] = temp2;
                v[j + 1] = temp;
            }
        }
    }

    cout << endl << "Elementi Ordinati" << endl;

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
}