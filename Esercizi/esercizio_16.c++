
//
// Created by Guea Serge on 20/02/2023.
//


/*

Scrivi un programma in C++ che prenda in input una stringa di caratteri e ne conti il numero di vocali utilizzando.

*/

#include <iostream>
#include <string>

using namespace std;

string s;
int contatore = 0;

void input() {
    cin >> s;
    contatore++;
}

int main() {
    for (int i = 0; i < 2; i++) {
        cout << "Inserisci una parola: ";
        input();
        for (int j = 0; j < s.length(); j++) {
            if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u') {
                contatore++;
            }
        }
        cout << contatore << endl;
    }
    return 0;
}