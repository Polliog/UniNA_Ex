/* Si scriva un programma C++ che, dati tre numeri interi (a,b,c) inseriti dall'utente, mostri a video il risultato
 * di a - b poi moltiplicato c.
 */

#include <iostream>
using namespace std;

int main() {
    int a,b,c,totale;

    cout << "Inserisci 3 numeri interi: ";
    cin >> a >> b >> c;
    totale = (a - b) * c;

    cout << "Il totale e': " << totale << endl;
}