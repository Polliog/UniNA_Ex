//Leggere in input due numeri naturali b e h e in output far scrivere un rettangolo di "*" con b asterischi per la base e h per l'altezza
// ad esempio se legge 5 e 3

#include <iostream>

using namespace std;

int main() {
    int b, h;

    cout << "Inserisci base ed altezza: \n";
    cin >> b >> h;

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < b;j++) {
            if (j == b - 1) {
                cout << "*\n";
            } else {
               cout << "*";
            }
        }
    }
}