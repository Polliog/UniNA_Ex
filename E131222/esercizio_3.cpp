#include <iostream>
using namespace std;
typedef char str[256];

int calcolaLunghezza(str s) {
    int l = 0;

    while(s[l]) {
        l++;
    }

    return l;
}

int main() {
    str s = "";
    cout << "Inserisci stringa: " << endl;
    cin >> s;

    int l = calcolaLunghezza(s);

    for (int i =0; i < l; i++) {
        s[i] = tolower(s[i]);
    }

    cout << s;
}