#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    int min = 0, max, mid;

    cout << "Inserisci 3 numeri\n";
    cin >> a >> b >> c;

    if (a > b) {
        if (a > c) {
            max = a;
            if (b > c) {
                mid = b;
                min = c;
            } else {
                mid = c;
                min = b;
            }
        } else {
            max = c;
            mid = a;
            min = b;
        }
    } else {
        if (b > c) {
            max = b;
            if (a > c) {
                mid = a;
                min = c;
            } else {
                mid = c;
                min = a;
            }
        } else {
            max = c;
            mid = b;
            min = a;
        }
    }

    cout << "I numeri in ordine crescente sono:\n";
    cout << min << endl << mid << endl << max << endl;
}