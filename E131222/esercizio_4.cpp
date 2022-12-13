//Si scriva un programma C++ che permetta di allocare dinamicamente
//un vettore ed inizializzarlo con i valori definiti dall’utente. Inoltre, dato
//un valore definito dall’utente si effettui la ricerca dell’elemento e in caso
//positivo si stampi a video la posizione, nel caso in cui l’elemento è
//presente più volte stampino tutte le posizioni.

#include <iostream>
using namespace std;

int main() {
    int n;
    int *v;

    cout << "Quanti elementi vuoi inserire?" << endl;
    cin >> n;

    v = new int[n];

    for (int i = 0; i < n; i++) {
        cout << "Inserisci l'elemento n " << i + 1 << endl;
        cin >> v[i];
    }

    cout << "Elementi Inseriti" << endl;

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    cout << endl;

    int el;

    cout << "Quale elemento vuoi cercare?" << endl;
    cin >> el;

    bool found = false;

    for (int i = 0; i < n; i++) {
        if (v[i] == el) {
            cout << "Elemento trovato in posizione " << i << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Elemento non trovato" << endl;
    }
}