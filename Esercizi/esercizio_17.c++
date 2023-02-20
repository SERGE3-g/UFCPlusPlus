//
// Created by Guea Serge on 20/02/2023.
//


/*

Scrivi un programma in C++ che prenda in input una stringa di caratteri
e conti quante volte ogni carattere è presente all'interno della stringa.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;

string s;
int contatore = 0;
vector<char> v;

void input() {
    cin >> s;
    contatore++;
}

void input1() {
    cin >> s;
    contatore++;
}

void input2() {
    cin >> s;
    contatore++;
}

int main() {
    for (int i = 0; i < 2; i++) {
        cout << "Inserisci una parola: ";
        input();
        for (int j = 0; j < s.length(); j++) {
            v.push_back(s[j]);
        }
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}