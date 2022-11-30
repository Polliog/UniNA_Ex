//scrivere un programma che data una struttura formata da 3 membri,
//a,b e sum, faccia la somma di a e b e la metta in sum

#include <iostream>
using namespace std;

struct struttura {
    int a;
    int b;
    int sum;
} strutturaEsercizio;

int main() {
    cout << "Inserire 2 numeri:\n";
    cin >> strutturaEsercizio.a >> strutturaEsercizio.b;
    strutturaEsercizio.sum = strutturaEsercizio.a + strutturaEsercizio.b;

    cout << "La somma e' " << strutturaEsercizio.sum;
    return 0;
}