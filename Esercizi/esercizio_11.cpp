//
// Created by gueas on 15/02/2023.
//



  /*
   *    bool ciSonoDoppie (string parola)
   */

#include <iostream>
#include <string>

using namespace std;

bool ciSonoDoppie(string ciaoooo) {
    for (int i = 0; i < ciaoooo.length(); i++) {
        for (int j = i + 1; j < ciaoooo.length(); j++) {
            if (ciaoooo[i] == ciaoooo[j]) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    string parola;
    cout << "Inserisci una parola: ";
    cin >> parola;
    if (ciSonoDoppie(parola)) {
        cout << "Vero" << endl;
    } else {
        cout << "Falso" << endl;
    }
    return 0;
}
