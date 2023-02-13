//
// Created by gueas on 13/02/2023.
//

#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cout << "Inserisci il primo numero: ";
    cin >> a;
    cout << "Inserisci il secondo numero: ";
    cin >> b;
    cout << "Inserisci il terzo numero: ";
    cin >> c;
    if (a > b && a > c) {
        cout << "Il numero maggiore è: " << a;
    } else if (b > a && b > c) {
        cout << "Il numero maggiore è: " << b;
    } else {
        cout << "Il numero maggiore è: " << c;
    }
    return 0;
}