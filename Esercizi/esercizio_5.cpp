//
// Created by gueas on 14/02/2023.
//


/*
 *  Scrivere un algoritmo che visualizza in ordine
*   decrescente i numeri naturali da 300 a 150
 */

#include <iostream>

using namespace std;

int visualizzaDecrescente(int n) {
    int i = 0;
    for (i = n; i >= 150; i--) {
        cout << i << endl;
    }
    return 0;
}

int main() {
    int i = 0;
    for (i = 300; i >= 150; i--) {
        cout << i << endl;
    }
    visualizzaDecrescente(300);
    return 0;
}