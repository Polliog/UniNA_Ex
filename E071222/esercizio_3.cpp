/*Scrivere un programma che prende una matrice d'interi positivi.
 *Il programma deve stampare l'indice della riga della matrice con somma massima
*/


#include <iostream>
using namespace std;

int main() {
    int c,r;

    int max = 0;
    int maxIndex = 0;

    cout << "Righe?" << endl;
    cin >> r;

    cout << "Colonne?" << endl;
    cin >> c;

    int m[r][c];

    for (int i = 0; i < r;i++) {
        for (int j = 0; j < c;j++) {
            cout << "(" << i << "," << j << ")" << endl;
            cin >> m[i][j];
        }
    }

    cout << "Matrice inserita" << endl;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << m[i][j] << "|";
        }
        cout << endl;
    }

    for (int i = 0; i < r; i++) {
        int sum = 0;
        for (int j = 0; j < c; j++) {
            sum += m[i][j];
        }
        if (sum > max) {
            max = sum;
            maxIndex = i;
        }
    }

    cout << "L'indice della riga con somma massima è: " << maxIndex << "(" << maxIndex + 1 << ")" << endl;
}