//
// Created by gueas on 14/02/2023.
//

/*
 *Scrivi un programma che calcoli e stampi la
*somma dei quadrati dei primi 10 numeri
*naturali.
 */

#include <iostream>

using namespace std;

int calcolaSommaQuadrati(int n){
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + i * i;
    }
    return sum;
}

void stampaPari(int x) {
    int  sum = 0;
    for (int i = 0; i <= x; i++) {
        if (i % 2 == 0) {
            sum = sum + i;
        }
    }
}

int main() {
    int result = calcolaSommaQuadrati(10);
    cout << "La somma dei quadrati dei primi 10 numeri naturali e': " << result;
    return 0;

}

