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

int pippo(int n) {
    int k = 1;
    int somma = 1;
    while (somma <= n) {
        k++;
        somma = somma + k;
    }
    return k - 1;

}
int pippoFor(int n) {
    int k = 1;
    int somma = 1;
    for (int k = 1; somma <= n; k++) {
        k++;
        somma = somma + k;
    }
    return k - 1;
}

int main() {

    int result = pippo(20);
    cout <<result;
    cout <<"\n";
    int resultFor = pippoFor(20);
    return 0;
}



