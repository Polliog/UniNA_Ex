//Si scriva un programma C++ che permetta di allocare dinamicamente
//una matrice ed inizializzarla con i valori definiti dall’utente. Inoltre,
//verifica se la matrice è quadrata in caso positivo estrae la diagonale
//maggiore

#include <iostream>
using namespace std;

int main() {
    int r,c;
    int **m;

    cout << "Righe?" << endl;
    cin >> r;

    cout << "Colonne?" << endl;
    cin >> c;

    m = new int*[r];

    for (int i = 0; i < r; i++) {
        m[i] = new int[c];
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << "(" << i << "," << j << ")" << endl;
            cin >> m[i][j];
        }
    }

    cout << "Matrice inserita" << endl;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    if (r == c) {
        cout << "Diagonale maggiore" << endl;

        for (int i = 0; i < r; i++) {
            cout << m[i][i] << " ";
        }
    } else {
        cout << "Matrice non quadrata" << endl;
    }
}