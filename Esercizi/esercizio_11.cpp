//
// Created by gueas on 15/02/2023.
//



  /*
   *    bool ciSonoDoppie (string parola)
   */

#include <iostream>
#include <string>

using namespace std;

bool ciSonoDoppie(string parola) {
    for (int i = 0; i < parola.length(); i++) {
        if (parola[i] == parola[i + 1]) {
            return true;
        }
    }
    return false;
}

int main() {
    string parola;
    bool doppie = false;
    cout << "Inserisci una parola: ";
    cin >> parola;
    while (parola!= "2") {
        if (ciSonoDoppie(parola) == true) {
            doppie = true;
            cout << doppie << endl;
            cin >> parola;
        } else {
            doppie = false;
            cout << doppie << endl;
            cin >> parola;
        }
    }
}
