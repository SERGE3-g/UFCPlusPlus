//
// Created by gueas on 14/02/2023.
//


/*Scrivere un programma in C++ che calcoli e
*stampi tutti i numeri compresi tra 300 e 150,
*che sono divisibili per 3.
 */

#include <iostream>

using namespace std;
// creo la funzione che calcola i numeri divisibili per 3

int calcDivisibili(int n) {
    int i = 0;
    for (i = n; i >= 150; i--) {
        if (i % 3 == 0) {
            cout << i << endl;
        }
    }
    return 0;
}

void stampaNumeri(int n) {
    int i = 0;
    for (i = n; i >= 150; i--) {
        cout << i << endl;
    }
}
// In main chiamo la funzione e stampo i numeri divisibili per 3

int main() {
    int i = 0;
    for (i = 300; i >= 150; i--) {
        if (i % 3 == 0) {
            cout << i << endl;
        }
    }
    calcDivisibili(300);
    stampaNumeri(300);
    return 0;
}

