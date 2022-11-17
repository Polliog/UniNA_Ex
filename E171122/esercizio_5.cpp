//Si scriva un programma che legge un pin di 4 cifre inserito dall’utente e lo imposta come pin di un telefono. Il programma successivamente chiede di reinserire il pin, se viene inserito quello corretto scrive “telefono sbloccato”, altrimenti lo richiede ancora e al terzo tentativo errato visualizza il messaggio “telefono bloccato”.

#include <iostream>
using namespace std;

int main() {
    int p1,p2,p3,p4;
    int p21,p22,p23,p24;
    int t = 1;

    cout << "Inserisci 4 cifre per creare un pin\n";
    cin >> p1 >> p2 >>p3 >>p4;

    cout << "Inserisci il pin\n";

    while (t < 4) {
        cout << "Tentativo " << t << "/3\n";
        cin >> p21 >> p22 >> p23>> p24;

        if (p1 != p21 || p2 != p22 || p3 != p23 || p4 != p24) {
            cout << "Pin non corretto, riprova\n";
            t++;
        } else {
            cout << "Pin corretto, Telefono sbloccato";
            return 0;
        }
    }

    cout << "Telefono bloccato, contatta l'assistenza";
}