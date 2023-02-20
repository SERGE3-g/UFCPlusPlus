//
// Created by gueas on 15/02/2023.
//

/*
 *   Fai inserire all’utente da tastiera 10 parole.
 *   Stampa la più grande
 */


#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

string parola;
string parolaMax;
string parolaMin;

int main() {
    for (int i = 0; i < 10; i++) {
        cout << "Inserisci una parola: ";
        cin >> parola;
        if (parola.length() > parolaMax.length()) {
            parolaMax = parola;
        }
        if (parola.length() < parolaMin.length()) {
            parolaMin = parola;
        }
    }
    cout << "La parola piu' lunga e': " << parolaMax << endl;
    cout << "La parola piu' corta e': " << parolaMin << endl;
    return 0;
}

