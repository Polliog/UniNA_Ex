//scrivere un programma che legge da tastiera una matrice m
/*
 * di dimensioni 2x3 e che calcola
 * la matrice m = matrice trasposta
 * la matrice prodotto m*mT
 */

#include <iostream>
using namespace std;

int main() {
    int m[2][3];
    int mT[3][2];

    cout << "Inserisci i numeri: \n";

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "(" << i << "," << j << ")" << endl;
            cin >> m[i][j];
        }
    }

    cout << "Matrice inserita" << endl;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << m[i][j] << "|";
        }
        cout << endl;
    }

    //generazione matrice trasposta
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            mT[i][j] = m[j][i];
        }
    }

    cout << "Matrice trasposta" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << mT[i][j] << "|";
        }
        cout << endl;
    }

    //generazione matrice prodotto
    int mP[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            mP[i][j] = m[i][j] * mT[i][j];
        }
    }

    cout << "Matrice prodotto" << endl;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2;j++) {
            cout << mP[i][j] << "|";
        }
        cout << endl;
    }


}