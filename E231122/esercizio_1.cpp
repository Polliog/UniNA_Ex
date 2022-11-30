//Scrivere un programma che, data una matrice in ingresso, generi due vettori V1 e V2 contenenti rispettivamente la somma di
//ogni riga e la somma di ogni colonna della matrice.

#include <iostream>
using namespace std;

int main() {

    int m[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> m[i][j];
        }
    }

    int v1[3];
    int v2[3];

    for (int i = 0; i < 3; i++) {
        v1[i] = 0;
        v2[i] = 0;
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            v1[i] += m[i][j];
            v2[j] += m[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        cout << v1[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < 3; i++) {
        cout << v2[i] << " ";
    }

    cout << endl;

}