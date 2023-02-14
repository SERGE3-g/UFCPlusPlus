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

// creo una funzione che chiede all'utente di inserire 10 numeri

int inserireNumero(int numero) {
    cout << "Inserire un numero: ";
    cin >> numero;
    return numero;
}
// creo una funzione che determina il numero più grande tra questi

int inserireNumero(int numero, int numero2) {
    cout << "Inserire un numero: ";
    cin >> numero;
    cin >> numero2;
    return numero * numero2;
}
void stampaNumero(int numero ,int numero2) {
    cout << "Il numero piu' grande tra questi e': " << numero * numero2;
    return;
}

int main() {
    int numero = 10;
    int numero2 = 15;

    int result = inserireNumero(numero);
    int result2 = inserireNumero(numero, numero2);
    stampaNumero(result, result2);

    return 0;
}