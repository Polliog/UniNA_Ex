#include "libreria.h"

//esisteSottoMatrice che riceve in ingresso una matrice quadrata M e restituisce true se sulle righe pari ci sono
//solo elementi dispari e sulle dispari solo elementi pari, false altrimenti (considerare la riga 0 come pari);
bool esisteSottoMatrice(int m[][100],int n) {
    bool respected = true;

    for (int i = 0; i < n; i++) {
        if (!respected) break;

        for (int j = 0; j < n; j++) {
            if ((i + 1) % 2 == 0) {
                if (m[i][j] % 2 == 0) {
                    respected = false;
                }
            } else {
                if (m[i][j] % 2 != 0) {
                    respected = false;
                }
            }
        }
    }

    return respected;
}

//valuta che riceve in ingresso una matrice quadrata M e restituisce true se A non contiene elementi di valore pari
//a 0 posti su righe di indice pari e false altrimenti;
bool valuta(int m[][100], int n) {
    bool respected = true;

    for (int i = 0; i < n; i++) {
        if (!respected) break;

        for (int j = 0; j < n; j++) {
            if ((i + 1) % 2 == 0) {
                if (m[i][j] == 0) {
                    respected = false;
                }
            }
        }
    }

    return respected;
}