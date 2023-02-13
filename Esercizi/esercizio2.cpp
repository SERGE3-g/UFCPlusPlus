//
// Created by gueas on 13/02/2023.
//

/*
 * Scrivere un programma che stampa i numeri
pari da 0 a 20
 */

#include <iostream>

using namespace std;
void stampaPari(int n) {
    int i = 0;
    while (i <= n) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
        i++;
    }
}

int main()
{
    int i = 0;
    while (i <= 20) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
        i++;
    }
    return 0;
}