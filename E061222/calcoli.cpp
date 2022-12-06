#include "calcoli.h"
#include <iostream>

void somma_vettoriale(int v[], int n) {
    int var=0;
    for (int i = 0; i < n; i++) {
        var = var + v[i];
    }

    std::cout << "Il risultato e': " << var;
}

