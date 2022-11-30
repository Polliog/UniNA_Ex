// puntatori
// 22/11/2012

#include <iostream>
using namespace std;

int main() {

    //& significa "indirizzo di" "riferimento"
    // * significa "dereferenzia" "indirizzo di" "riferimento"

    int *p1;
    int a;

    cin >> a;

    p1 = &a; //assegna l'indirizzo di "a" a p1

    cout << p1 << endl; //stampa l'indirizzo di "a"
    cout << *p1 << endl; //stampa il valore di "a"

    *p1 = 20; //modifica il valore di "a"

    cout << a << endl; //stampa il valore di "a"

    //operazioni sui puntatori
    int *p2;

    p2 = &a;

    cout << p2 + 3 << endl; //Il puntatore si muove di 3 interi
    cout << *p2++ << endl; //Il puntatore si muove di 1 intero
    cout << (*p2)++ << endl; //Il puntatore si muove di 1 intero

    //operatore new

    int *p3 = new int; //alloca un intero in memoria heap
    int *p4 = new int[10]; //alloca 10 interi in memoria heap

    //memoria heap: memoria non gestita dal compilatore (non viene deallocata automaticamente) ma gestita dal programmatore (deve essere deallocata manualmente)
    //memoria stack: memoria gestita dal compilatore (viene deallocata automaticamente)

    //operatore delete

    delete p3; //dealloca l'intero in memoria heap
    delete[] p4; //dealloca gli interi in memoria heap

    //puntatori con array

    int a1[10];

    int *p5 = a1; //assegna l'indirizzo di "a1" a p5

    cout << p5 << endl; //stampa l'indirizzo di "a1"

    cout << *p5 << endl; //stampa il valore di "a1[0]"


}