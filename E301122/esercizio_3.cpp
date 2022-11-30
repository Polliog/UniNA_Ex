/* Dato un array int b[4] stampare con un ciclo for gli elementi dell'array usando:
 * puntatore e aritmetica dei puntatori;
 * Puntatori e indici
 * array e aritmetica dei puntatori
 */

#include <iostream>
using namespace std;

int main() {
    int b[4] = {1, 2, 3, 4};
    int *p = b;


    for (int i = 0; i < 4; i++) {
        cout << *(p + i) << endl;
    }

    for (int i = 0; i < 4; i++) {
        cout << p[i] << endl;
    }

    for (int i = 0; i < 4; i++) {
        cout << *(b + i) << endl;
    }

    return 0;
}