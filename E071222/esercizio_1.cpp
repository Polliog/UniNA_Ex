//Triangolo di tartaglia

#include <iostream>

using namespace std;


int main() {
    int n;
    cout << "Inserisci il numero di righe del triangolo di tartaglia: ";
    cin >> n;

    int t[n][n];

    for (int i = 0; i < n; i++) {                //1
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                t[i][j] = 1;                  //1..n..1
            } else {
                t[i][j] = t[i - 1][j - 1] + t[i - 1][j];  //
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << t[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}