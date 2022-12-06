//costruire un'applicazione che manipoli i vettori e che consenta di dichiare dei vettori di lunghezza generica, inserire
//i dati all'interno del vettore e poi risolva il seguente problema, costruisca dato il vettore iniziale il metodo,
//elimina duplicati che dal vettore iniziale restituisca un vettore v2 che non contenga alcun duplicato

#include <iostream>
#include "calcoli.h"
using namespace std;

void elimina_duplicati(int v[], int n) {
    int v2[n];
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] != v[i+1]) {
            v2[j] = v[i];
            j++;
        }
    }

    cout << "Il vettore senza duplicati e': \n";
    for (int i = 0; i < j; i++) {
        cout << v2[i] << endl;
    }
}

int main() {
    int l1 = 0;

    cout << "Quanto deve essere grande il vettore?\n";
    cin >> l1;

    int v1[l1];

    cout << "Inserisci dei numeri nel vettore\n";

    for (int i =0; i<l1;i++) {
        cin >> v1[i];
    }

    cout << "Elementi inseriti\n";
    //elemnti nell'array

    for (int i = 0; i < l1; i++) {
        cout << v1[i] << endl;
    }

    elimina_duplicati(v1,l1);
}