//scrivere un programma che emuli un agenda telefonica. In particolare le operazioni possibili sono:
/* --Inserimento contatto
 *  - visualizza contatti
 *  -Elimina contatto
 *  trovare un contatto
 *  esci
 *  un contatto e' formato dai campi: nome cognome numero di telefono
 */

#include <iostream>
#include <string>

using namespace std;

struct structContatto {
    string nome;
    string cognome;
    string numero;
} contatto;

struct structAgenda {
    structContatto contatti[10];
    int numeroContatti;
} agenda;

int main() {
    int scelta = 0;

    while (scelta != 5) {
        cout << "1. Inserisci contatto\n";
        cout << "2. Visualizza contatti\n";
        cout << "3. Elimina contatto\n";
        cout << "4. Trova contatto\n";
        cout << "5. Esci\n";
        cout << "Scelta: ";
        cin >> scelta;
        cout << endl;

        switch (scelta) {
            case 1:
                cout << "Inserisci nome: ";
                cin >> contatto.nome;
                cout << "Inserisci cognome: ";
                cin >> contatto.cognome;
                cout << "Inserisci numero: ";
                cin >> contatto.numero;
                agenda.contatti[agenda.numeroContatti] = contatto;
                agenda.numeroContatti++;
                cout << "Contatto inserito con successo!\n";

                cout << agenda << e
                break;
        }
    }
}