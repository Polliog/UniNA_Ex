/* Scrivere un programma che riceva in ingresso una matrice M e un indice di riga i.
 * Il programma deve eliminare la riga i (usando i puntatori)
 */

#include <iostream>
using namespace std;

int main () {

    int r,c;

    cout << "Righe?" << endl;
    cin >> r;

    cout << "Colonne?" << endl;
    cin >> c;

    int m[r][c];
    int *p = &m[0][0];


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

    int index;

    cout << "Inserisci l'indice della riga da eliminare" << endl;
    cin >> index;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (i == index) {
                p++;
            }
            cout << *p << "|";
            p++;
        }
        cout << endl;
    }

    return 0;
}