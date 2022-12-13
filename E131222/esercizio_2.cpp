//verificare che la stringa sia palindroma;
#include <iostream>
typedef char str[256];

using namespace std;

int calcolaLunghezza(str s) {
    int l = 0;

    while(s[l]) {
        l++;
    }

    return l;
}

int main() {
    str s = "";
    bool pal = true;

    cout << "Inserisci stringa: " << endl;
    cin >> s;

    int l = calcolaLunghezza(s);

    for (int i = 0; i < l/2; i++) {
        if (s[i] != s[l-1-i]) {
            pal = false;
            break;
        }
    }

    if (pal) {
        cout << "Palindroma" << endl;
    } else {
        cout << "Non palindroma" << endl;
    }
}