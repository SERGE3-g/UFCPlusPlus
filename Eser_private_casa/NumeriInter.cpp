//
// Created by gueas on 14/02/2023.
//
//Esercizio 1

/*
 * Dati tre numeri interi ' A ' che denotano il primo termine di una sequenza aritmetica,
 * ' C ' che denota la differenza comune di una sequenza aritmetica e un numero intero ' B '.
 * devi dire se 'B' esiste o meno nella sequenza aritmetica.
 * Restituisce 1 se B è presente nella sequenza. In caso contrario, restituisce 0
 *
 */
#include <iostream>
#include <string>


using namespace std;

int main() {
    int a = 0;
    int b = 0;
    int c = 0;

cout << "Inserisci il primo termine della sequenza aritmetica: ";
cin >> a;
cout << "Inserisci la differenza comune della sequenza aritmetica: ";
cin >> c;
cout << "Inserisci il numero da cercare nella sequenza aritmetica: ";
cin >> b;
cout << "Inserisci il numero da cercare nella sequenza aritmetica: ";
cin >> c;
    cout << endl;
    cout << a << " " << b << " " << c << endl;

    return 0;
}