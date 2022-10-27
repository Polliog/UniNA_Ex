/*Si scriva un programma C++ che mostri a video il quoziente ed il resto di due numeri interi inseriti dall'utente.
 * Se il divisore e' uguale a 0 sia il quoziente che il resto dovranno essere posti a -1.
*/

#include <iostream>
using namespace std;

int main() {
    int a, b, quoziente, resto;

    cout << "Inserisci il dividendo: ";
    cin >> a;
    cout << "Inserisci il divisore: ";
    cin >> b;
    if (b == 0) {
        quoziente = -1;
        resto = -1;
    } else {
        quoziente = a / b;
        resto = a % b;
    }
    cout << "Il quoziente e': " << quoziente << endl;
    cout << "Il resto e': " << resto << endl;
    return 0;
}