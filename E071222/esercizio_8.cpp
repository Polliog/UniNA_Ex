/*
 * Trova massimo e minimo in una matrice
 */

#include <iostream>
using namespace std;

int main() {
    int c,r;
    int min,max;
    bool minSet = false;
    bool maxSet = false;

    cout << "Righe?" << endl;
    cin >> r;

    cout << "Colonne?" << endl;
    cin >> c;

    int m[r][c];

    for (int i = 0; i < r;i++) {
        for (int j = 0; j < c;j++) {
            cout << "(" << i << "," << j << ")" << endl;
            cin >> m[i][j];
        }
    }

    cout << "Matrice inserita" << endl;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < r;i++) {
        for (int j = 0; j < c;j++) {
            if (m[i][j] < min || !minSet) {
                min = m[i][j];
                minSet = true;
            }
            if (m[i][j] > max || !maxSet) {
                max = m[i][j];
                maxSet = true;
            }
        }
    }

    cout << endl;
    cout << "Massimo: " << max << endl;
    cout << "Minimo: " << min << endl;
}