//Successione di fibonacci

#include <iostream>

using namespace std;

int main() {
    int lim = 20;
    int primo = 1, secondo=1,terzo;

    cout << primo << endl << secondo << endl;

    for (int i = 0; i < lim; i++) {
        terzo = primo + secondo;
        primo = secondo;
        secondo = terzo;
        cout << terzo << endl;
    }
}