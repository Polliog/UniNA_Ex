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
    int l = 0;

    str cons = "";
    int lc = 0;

    str voc = "";
    int lv = 0;


    cout << "Inserisci una stringa";
    cin >> s;

    l = calcolaLunghezza(s);

    for (int i = 0; i < l; i++) {
        if (s[i] == 'A' || s[i] ==  'E' || s[i] ==  'I' || s[i] ==  'O' || s[i] == 'U' ||
            s[i] == 'a' || s[i] ==  'e' || s[i] ==  'i' || s[i] ==  'o' || s[i] ==  'u') {
            voc[lv] = s[i];
            lv++;
        }
        else if (s[i] == '\0') {}
        else {
            cons[lc] = s[i];
            lc++;
        }
    }

    cout << "Vocali: " << lv << endl << voc << endl;
    cout << "Consonanti: " << lc << endl << cons << endl;

}