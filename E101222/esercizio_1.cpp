//Si scriva un sottoprogramma selezionaVettore che riceve in ingresso due vettori di interi v1 e v2 di uguale dimensione, e
//restituisce un vettore v3 contenente un sottoinsieme degli elementi di v1. In particolare, il generico elemento v1[i] sarà
//inserito in v3 se v1[i] è minore di qualche elemento in v2 di indice maggiore di i. Qualora nessuno tra gli elementi di v1
//rispetti la condizione suddetta, il vettore v3 conterrà un solo elemento il cui valore è 0.
//Ad esempio, se v1= [ 7 , 10 , 3, 2] e v2= [ 2, 8, 1, 4] il vettore restituito è v3 = [ 7, 3].

#include <iostream>
using namespace std;

void selezionaVettore(const int v1[], const int v2[], int n) {
    int v3[n];
    bool inserted = false;
    int v3els = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (v1[i] < v2[j]) {
                v3[v3els] = v1[i];
                v3els++;
                inserted = true;
                break;
            }
        }
    }

    if (!inserted) {
        v3[v3els] = 0;
        v3els++;
    }

    cout << "Elementi SottoProgramma" << endl;

    for (int i = 0; i < v3els; i++) {
        cout << v3[i] << " ";
    }
}

int main() {
    int n;

    cout << "Quanto sono grandi le liste?\n";
    cin >> n;

    int v1[n];

    for (int i = 0; i < n; i++) {
        cout << "Inserisci l'elemento per la lista 1 n " << i + 1 << endl;
        cin >> v1[i];
    }

    cout << "Elementi Inseriti" << endl;

    for (int i = 0; i < n; i++) {
        cout << v1[i] << " ";
    }

    cout << endl;

    int v2[n];

    for (int i = 0; i < n; i++) {
        cout << "Inserisci l'elemento per la lista 2 n " << i + 1 << endl;
        cin >> v2[i];
    }

    cout << "Elementi Inseriti" << endl;

    for (int i = 0; i < n; i++) {
        cout << v2[i] << " ";
    }

    cout << endl;

    selezionaVettore(v1,v2,n);
}