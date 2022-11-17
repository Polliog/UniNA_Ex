//Su di un treno i pensionati usufruiscono di uno sconto del 10%, gli studenti del 15% e infine i pendolari del 25%.
// Codificando i pensionati con una P, gli studenti con una S e i disoccupati con una PP, scrivere un programma che,
// richiesto il costo di un biglietto e l’eventuale condizione dell’utente, visualizzi l’importo da pagare.

#include <iostream>
using namespace std;

int main() {
    float cost = 0;
    char cond = ' ';

    cout << "Inserisci il costo del biglietto\n";
    cin >> cost;

    cout << "Inserisci la condizione dell'utente (P, S, PP)\n";
    cin >> cond;

    if (cond == 'P') {
        cost = cost - (cost * 0.1);
    } else if (cond == 'S') {
        cost = cost - (cost * 0.15);
    } else if (cond == 'PP') {
        cost = cost - (cost * 0.25);
    }

    cout << "Il costo del biglietto e' " << cost << endl;
}