//Scrivere un programma che converte la temperatura inserita dall’utente in Celsius in temperatura in
// gradi Fahrenheit ed in Kelvin. Se la temperatura inserita è minore dello zero assoluto (-273,15),
// il programma segnala un errore.

#include <iostream>
using namespace std;

int main() {
    float c;

    cout << "Inserisci la temperatura in (C)" << endl;
    cin >> c;

    if (c < -273.15) {
        cout << "Temperatura minore dello zero assoluto" << endl;
    }

    cout << "Temperatura in Fahreheit " << (c * 9/5) + 32 << " F" << endl;
    cout << "Temperatura in kelvin "  << c + 273.15 << " K" << endl;
}