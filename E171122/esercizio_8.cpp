//Scrivere un programma che per una classe con 10 alunni si chieda ad ognuno:
//• quanti voti ha
//• fa inserire i voti
//• calcola per ogni alunno la media
// • dice quante insufficienze ha quell’alunno.
// Dopo che sono stati inseriti i voti per tutti gli alunni, il programma dice quanti voti insufficienti in tutto ci sono stati e quanti alunni hanno una media inferiore al 6.

#include <iostream>
using namespace std;

int main() {
    int g_ins = 0;
    int a_ins = 0;

    for (int i = 0; i < 10; i++) {
        int v_num = 0;
        int sum = 0;
        int ins = 0;
        int mid = 0;

        cout << "Quanti voti ha l'alunno numero " << i+1 << "?\n";
        cin >> v_num;

        for (int j = 0; j < v_num; j++){
            int v = -1;

            while (v < 0 || v > 10) {
                cout << "Inserisci il voto n" << j + 1 << endl;
                cin >> v;
            }

            if (v < 6) {
                ins ++;
                g_ins ++;
            }

            sum = sum + v;
        }

        mid = sum / v_num;

        if (mid < 6) {
            a_ins++;
        }

        cout << "Media Alunno: " << mid << endl;
        cout << "Voti insufficienti: " << ins << endl;
    }

    cout << "\n\n";
    cout << "Voti insufficienti totali: " << g_ins << endl;
    cout << "Alunni con media insufficiente: "<< a_ins << endl;

}