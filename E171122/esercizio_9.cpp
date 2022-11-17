//Creare un programma che data una data nel formato giorno mese anno in numeri la scriva esplicitando il mese in parole.
//Es: 26/6/2021 viene scritto a schermo “26 giugno 2021”

#include <iostream>
using namespace std;

int main() {
    int g,m,a;

    cout << "Inserisci il giorno\n";
    cin >> g;
    cout << "Inserisci il mese\n";
    cin >> m;
    cout << "Inserisci l'anno\n";
    cin >> a;

switch (m) {
        case 1:
            cout << g << " gennaio " << a << endl;
            break;
        case 2:
            cout << g << " febbraio " << a << endl;
            break;
        case 3:
            cout << g << " marzo " << a << endl;
            break;
        case 4:
            cout << g << " aprile " << a << endl;
            break;
        case 5:
            cout << g << " maggio " << a << endl;
            break;
        case 6:
            cout << g << " giugno " << a << endl;
            break;
        case 7:
            cout << g << " luglio " << a << endl;
            break;
        case 8:
            cout << g << " agosto " << a << endl;
            break;
        case 9:
            cout << g << " settembre " << a << endl;
            break;
        case 10:
            cout << g << " ottobre " << a << endl;
            break;
        case 11:
            cout << g << " novembre " << a << endl;
            break;
        case 12:
            cout << g << " dicembre " << a << endl;
            break;
        default:
            cout << "Mese non valido" << endl;
            break;
    }
}