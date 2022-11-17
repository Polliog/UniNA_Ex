//Leggere un carattere e dire se è una vocale.

#include <iostream>
using namespace std;

int main() {
    char c;

    cout << "Inserisci il carattere\n";
    cin >> c;

    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        cout << "Il carattere e' una vocale";
    } else {
        cout << "Il carattere non e' una vocale";
    }
}



