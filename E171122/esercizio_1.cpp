//Scrivi il programma che legge due numeri e controlla se ail primo e' maggiore del secondo

#include <iostream>
using namespace std;

int main() {
    int n1,n2;

    cout << "Inserisci i 2 numeri:\n";
    cin >> n1 >> n2;

    if (n1 > n2) {
        cout << "Il primo numero e' maggiore del secondo" << endl;
    }
    else {
        cout << "I 2 numeri sono uguali o il secondo e' minore" << endl;
    }
}