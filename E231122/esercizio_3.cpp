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
                if (agenda.numeroContatti == 10) {
                    cout << "Limiti di contatti raggiunto!";
                }

                cout << "Inserisci nome: ";
                cin >> contatto.nome;
                cout << "Inserisci cognome: ";
                cin >> contatto.cognome;
                cout << "Inserisci numero: ";
                cin >> contatto.numero;
                agenda.contatti[agenda.numeroContatti] = contatto;
                agenda.numeroContatti++;
                cout << "Contatto inserito con successo!\n";
                break;
            case 2:
                cout << "Contatti presenti:" << endl;

                for (int i = 0; i < agenda.numeroContatti; i++) {
                    cout << i + 1 << endl;
                    cout << agenda.contatti[i].nome << endl;
                    cout << agenda.contatti[i].cognome << endl;
                    cout << agenda.contatti[i].numero << endl;
                    cout << endl;
                }

                break;
            case 3:
                cout << "Inserisci il numero del contatto da eliminare";
                int numeroContatto;
                cin >> numeroContatto;

                if (numeroContatto > agenda.numeroContatti) {
                    cout << "Contatto non trovato";
                    break;
                }

                for (int i = numeroContatto - 1; i < agenda.numeroContatti; i++) {
                    agenda.contatti[i] = agenda.contatti[i + 1];
                }

                agenda.numeroContatti--;

                cout << "Contatto eliminato con successo!";
                break;
            case 4:
                cout << "Inserisci il numero del contatto da cercare";
                int numeroContattoDaCercare;
                cin >> numeroContattoDaCercare;

                if (numeroContattoDaCercare > agenda.numeroContatti) {
                    cout << "Contatto non trovato";
                    break;
                }

                cout << agenda.contatti[numeroContattoDaCercare - 1].nome << endl;
                cout << agenda.contatti[numeroContattoDaCercare - 1].cognome << endl;
                cout << agenda.contatti[numeroContattoDaCercare - 1].numero << endl;
                break;
            case 5:
                cout << "Arrivederci!";
                break;
        }
    }
}