#include <iostream>
using namespace std;

int main() {
    int v = 2;
    int *vp = &v;

    cout << v << endl;
    cout << *vp << endl;

    v++;

    cout << v << endl;
    cout << *vp << endl;
}