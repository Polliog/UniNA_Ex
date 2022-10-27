#include "iostream"
using namespace std;

int main() {
    // Lista di persone per capire se e' biondo o meno

    string p[] = {"b", "c", "r", "v" , "q"};

    //Almeno 1 biondo
    bool exist = false;

    //da dove parto? || condizione || update
    for (int i = 0; i < p->length(); i++) {
        if (p[i] == "b") {
            exist = true;
            break;
        }
    }

    if (exist) {
        cout << "C'e' almeno una persona bionda";
    } else {
        cout << "Non ci sono persone bionde";
    };
}