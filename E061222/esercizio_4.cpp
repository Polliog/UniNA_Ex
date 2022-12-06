/*
 * Dato un array di 100 valori interi positivi, determinare la serie di tre valori consecutivi che sommati
 * danno il risultato più alto, stampare a console i tre indici dell'array, i tre valori, e la loro somma
 */


#include <iostream>

using namespace std;

int v[100] = {
        5,
        22,
        24,
        29,
        51,
        52,
        53,
        98,
        99,
        100,
        103,
        115,
        120,
        154,
        161,
        170,
        173,
        176,
        189,
        190,
        200,
        230,
        252,
        257,
        263,
        275,
        278,
        283,
        284,
        290,
        308,
        311,
        318,
        325,
        330,
        334,
        370,
        380,
        381,
        382,
        390,
        391,
        412,
        414,
        418,
        436,
        438,
        444,
        447,
        451,
        455,
        460,
        468,
        474,
        488,
        490,
        499,
        501,
        504,
        517,
        528,
        538,
        545,
        552,
        565,
        572,
        615,
        616,
        619,
        635,
        636,
        667,
        687,
        691,
        717,
        722,
        730,
        744,
        746,
        749,
        750,
        751,
        755,
        758,
        768,
        783,
        793,
        826,
        828,
        840,
        875,
        888,
        901,
        904,
        924,
        929,
        931,
        938,
        951,
        977,
};

int main() {
    int n1,n2,n3;
    int i1,i2,i3;
    int sum = 0;

    for (int i = 0; i < 100; i++) {
        int t_sum = 0;

        if (i == 0) {
            //cout << v[i] + v[i + 1] << endl;
            t_sum = v[i] + v[i+1];

            if (t_sum > sum) {
                sum = t_sum;
                n1 = -1;
                n2 = v[i];
                n3 = v[i+1];

                i1 = -1;
                i2 = i;
                i3 = i + 1;
            }
        }
        else if (i == 99) {
            //cout << v[i - 1] + v[i] << endl;
            t_sum = v[i-1] + v[i];

            if (t_sum > sum) {
                sum = t_sum;
                n1 = v[i-1];
                n2 = v[i];
                n3 = -1;

                i1 = i-1;
                i2 = i;
                i3 = -1;
            }
        } else {
           // cout << v[i - 1] + v[i] + v[i + 1] << endl;
           t_sum = v[i-1] + v[i] + v[i+1];

            if (t_sum > sum) {
                sum = t_sum;
                n1 = v[i-1];
                n2 = v[i];
                n3 = v[i+1];

                i1 = i-1;
                i2 = i;
                i3 = i+1;
            }
        }
    }

    cout << "Valore massimo: " << sum << endl;
    cout << "Numeri: " << n1 << ", " << n2 << ", " << n3 << endl;
    cout << "Indici: " << i1 << ", " << i2 << ", " << i3 << endl;

}