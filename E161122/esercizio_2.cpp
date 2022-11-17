//scrivere un programma che calcola la media di un vettore

#include <iostream>
using namespace std;

int main() {
    int n = 0, sum = 0;
    float mid = 0.0;

    while(n <= 0) {
         cout << "Quanto e'grande il vettore?\n";
         cin >> n;
    }

    int arr[10];

    cout << "Inserisci i numeri: \n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum = sum + arr[i];
    }

    mid = float(sum) / n;

    cout << "La media e' " << mid;
}