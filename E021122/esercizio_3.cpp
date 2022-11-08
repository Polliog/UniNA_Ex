// Scrivi un programma che consenta di risolvere un equazione di secondo grado

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, b, c, delta, x1, x2;
    cout << "Inserisci il coefficiente a: ";
    cin >> a;
    cout << "Inserisci il coefficiente b: ";
    cin >> b;
    cout << "Inserisci il coefficiente c: ";
    cin >> c;
    delta = b * b - 4 * a * c;
    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        cout << "x1 = x2 = " << x1 << endl;
    } else {
        cout << "L'equazione non ha soluzioni reali" << endl;
    }
    return 0;
}