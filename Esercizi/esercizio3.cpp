//
// Created by gueas on 13/02/2023.
//

/*
 *Scrivere un programma che calcola la somma
dei primi 100 numeri interi
 */

#include <iostream>

using namespace std;

void somma(int n) {
    int i = 0;
    int somma = 0;
    while (i <= n) {
        somma += i;
        i++;
    }
    cout << "La somma dei primi " << n << " numeri interi e': " << somma;
}

int main() {
    int i = 0;
    int somma = 0;
    while (i <= 100) {
        somma += i;
        i++;
    }
    cout << "La somma dei primi 100 numeri interi e': " << somma;
    return 0;
}








