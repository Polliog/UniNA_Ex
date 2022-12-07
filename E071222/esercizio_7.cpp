/* Memorizzare in una matrice 5x5 tutti 0 tranne nella diagonale principale
 * dove ci andra' 1
 */

#include <iostream>

using namespace std;

int main() {
    int m[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == j || i == 4 - j)
            {
                m[i][j] = 1;
            }
            else {
                m[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}