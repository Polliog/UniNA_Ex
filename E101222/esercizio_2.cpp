//Si realizzi una libreria Esercizio2 che contenga almeno i seguenti sottoprogrammi:
//1. esisteSottoMatrice che riceve in ingresso una matrice quadrata M e restituisce true se sulle righe pari ci sono
//solo elementi dispari e sulle dispari solo elementi pari, false altrimenti (considerare la riga 0 come pari);
//2. valuta che riceve in ingresso una matrice quadrata M e restituisce true se A non contiene elementi di valore pari
//a 0 posti su righe di indice pari e false altrimenti;
//3. un main in cui viene letta da input una matrice quadrata M di interi, e vengono opportunamente invocati i metodi
//        definiti ai punti 1 e 2

#include <iostream>
#include "libreria.h"

using namespace std;

int main() {
    int c,r;

    cout << "Righe?" << endl;
    cin >> r;

    cout << "Colonne?" << endl;
    cin >> c;

    int m[r][100];

    for (int i = 0; i < r;i++) {
        for (int j = 0; j < c;j++) {
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

    cout << "Esiste sotto matrice" << endl;
    cout << esisteSottoMatrice(m,r) << endl;

    cout << "Valuta" << endl;
    cout << valuta(m,r);
}