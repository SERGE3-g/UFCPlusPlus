//
// Created by Guea Serge on 20/02/2023.
//


/*

Scrivi un programma in C++ che prenda in input una stringa di caratteri e ne stampi ogni carattere in ordine inverso.

*/

#include <iostream>
#include <string>

using namespace std;
string s;


int main() {
    string s;
    for (int i = 0; i < 2; i++) {
        cout << "Inserisci una parola: ";
        cin >> s;
        for (int j = s.length() - 1; j >= 0; j--) {
            cout << s[j];
        }
        cout << endl;
    }
    return 0;
}