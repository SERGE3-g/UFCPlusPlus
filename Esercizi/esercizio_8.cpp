//
// Created by gueas on 14/02/2023.
//

/*
 * Scrivere un programma che riceva in ingresso
*  un numero positivo N e determini il massimo
*  intero K tale che la somma dei primi K interi
*  sia minore o uguale a N.
*
*  Ad esempio, se N=20 allora K risulta 5, infatti
*  1+2+3+4+5=15 mentre
*  1+2+3+4+5+6=21
 *
 */

#include <iostream>

using namespace std;

int numeroPositivo(int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + i;
    }
    return sum;
}

void determinaMassimo(int x) {
    int  sum = 0;
    for (int i = 0; i <= x; i++) {
        if (i % 2 == 0) {
            sum = sum + i;
        }
    }
}

int main() {
    int result = numeroPositivo(20);
    cout << result << endl;
    determinaMassimo(result);
    return 0;
}


