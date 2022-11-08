/*Si scriva un programma che effettui la somma, media e prodotto degli elementi di un vettore.
 * I valori del vettore sono reali e inseriti dall'utente
 */

#include <iostream>
using namespace std;

typedef int list[150];

int main() {
    list arr = {};
    int arr_dimension;

    int sum = 0;
    int prod = 1; // Parte da 1 invece che da 0 perche' altrimenti il risultato fa 0

    cout << "Quanti numeri vuoi inserire\n";
    cin >> arr_dimension;

    if (arr_dimension > 150) {
        cout << "Il valore massimo che puoi inserire e' 150\n";
        return 0;
    }

    for (int i = 0; i < arr_dimension; i++) {
        int temp = 0;

        cout << "Inserisci il valore n " << i + 1 << endl;
        cin >> temp;

        //controllo che non sia un float
        if ((temp % 2 == 1) || (temp % 2 == 0)) {
            arr[i] = temp;
        } else {
           cout << "Puoi inserire solo numeri reali\n";
           i--;
        }
    }

    for (int i = 0; i < arr_dimension; i++) {
        sum = sum + arr[i];
        prod = prod * arr[i];
    }

    cout << "Risultati:\n" << "Somma: " << sum << endl << "Prodotto: " << prod << endl << "Media: " << sum / arr_dimension << endl;

    return 0;
}