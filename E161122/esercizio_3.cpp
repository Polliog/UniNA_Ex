//Scrivere un programma che riceve in ingresso una matrice M e due indici di riga i e j. Il Programma deve effettuare lo scambio delle 2 righi
#include <iostream>
using namespace std;

#define MAX 100

typedef int matrice[MAX][MAX];

int main() {
    int righe, colonne;
    int i, j;
    int temp;

    matrice M;

    cout << "Quante righe ha la matrice? ";
    cin >> righe;
    cout << "Quante colonne ha la matrice? ";
    cin >> colonne;

    cout << "Inserisci i valori della matrice: \n";
    for (i = 0; i < righe; i++) {
        for (j = 0; j < colonne; j++) {
            cin >> M[i][j];
        }
    }

    cout << "Inserisci i due indici di riga da scambiare: ";
    cin >> i >> j;

    for (int k = 0; k < colonne; k++) {
        temp = M[i][k];
        M[i][k] = M[j][k];
        M[j][k] = temp;
    }

    cout << "La matrice risultante e': \n";
    for (i = 0; i < righe; i++) {
        for (j = 0; j < colonne; j++) {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }

}