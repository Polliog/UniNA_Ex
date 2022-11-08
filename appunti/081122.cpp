//Array in c ++
//E' una struttura composta da un insieme di elementi dello stesso tipo, raggruppati in una sola variabile.
//Es <tipo> nome [dimensione];
//Esempio: int a[10];
//La dimensione deve essere un numero intero positivo. La dimensione non può essere modificata durante l'esecuzione del programma.
//L'accesso agli elementi dell'array avviene tramite un indice che va da 0 a dimensione - 1.
//Esempio: a[0] è il primo elemento, a[1] è il secondo elemento, a[2] è il terzo elemento, ecc.

#include "iostream"

typedef int array[100];

int main() {
    array vet = {1,2,3,4,5};
    int pos = 1;
    int elem = 10;
    int dim = 6;

    // inserimento di un elemento in una posizione
    for (int i = dim; i > pos; i--) {
        vet[i] = vet[i - 1];
    }
    vet[pos] = elem;

    for (int i = 0; i < dim; i++) {
        std::cout << vet[i] << " ";
    }
}