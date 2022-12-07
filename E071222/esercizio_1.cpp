//Triangolo di tartaglia

#include <iostream>

using namespace std;


int main() {
    int r = 5;

    cout << "Inserisci un numero:" << endl;
    //cin >> r;

    int m[5][5];

    m[0][0] = r;
    for (int i = 1; i < r; i++) {
        m[i][0] = r;
        for (int j = 1; j < r;j++) {
            m[i][j] = m[i-1][j-1] + m[i-1][j];
        }
    }

    for (int i = 0; i < r;i++) {
        {
            for (int j = 1;j<r;j++)
                cout << " ";

            for (int j = 0;j <= i;j++) {
                cout << m[i][j] << "";
                cout << "\n";
            }
        }
    }
}