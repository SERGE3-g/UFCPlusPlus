//
// Created by gueas on 13/02/2023.
//

/*
 *Scrivere un programma che calcola la somma
dei primi 100 numeri interi
 */

#include <iostream>

using namespace std;

//SITUAZIONE 1
int calcolaSomma(int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + i;
    }
    return sum;
}

//SITUAZIONE 2

void stampaPari(int x) {
    int  sum = 0;
    for (int i = 0; i <= x; i++) {
        if (i % 2 == 0) {
            sum = sum + i;
        }
    }
}

//SITUAZIONE 3 con while

/*int main() {
    int i = 0;
    int somma = 0;
    while (i <= 100) {
        somma += i;
        i++;
    }
    cout << "La somma dei primi 100 numeri interi e': " << somma;
    return 0;
}*/

 //con for

/*int main() {
    int i = 0;
    int somma = 0;
    for (i = 0; i <= 10; i++) {
        somma += i;
    }
    cout << "La somma dei primi 100 numeri interi e': " << somma;
    }
    */


int main() {
    //SITUAZIONE 1

    int result = calcolaSomma(100);
    cout<<result<<endl;

    //SITUAZIONE 2

    stampaPari(100);
    return 0;
}








