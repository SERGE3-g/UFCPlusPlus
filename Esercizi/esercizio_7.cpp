//
// Created by gueas on 14/02/2023.
//

/*
* Scrivi un programma in C++ che chieda
* all'utente di inserire 10 numeri e determini il
* numero più grande tra questi.
 */

#include <iostream>

using namespace std;

int inserireNumero(int numero) {
    cout << "Inserire un numero: ";
    cin >> numero;
    return numero;
}

void stampaNumero(int numero) {
    cout << "Il numero inserito e': " << numero << endl;
}

int main() {
    int numero = 0;
    int max = 0;
    for (int i = 0; i < 10; i++) {
        numero = inserireNumero(numero);
        if (numero > max) {
            max = numero;
        }
    }
    stampaNumero(max);
    return 0;
}