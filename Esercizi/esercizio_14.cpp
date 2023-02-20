//
// Created by gueas on 15/02/2023.
//


/*
 *
 *  bool cerca(string parola, char c)
 *
 *
 */

#include <iostream>
#include <string>

using namespace std;

bool cerca(string parola, char c)
{
    if (parola[0] == c)
        return true;
    else
        return false;
}

    int main()
    {
        string parola;
        char c;
        bool trovato = false;
        cout << "Inserisci una parola: ";
        cin >> parola;
        cout << "Inserisci un carattere: ";
        cin >> c;
        while (parola!= "0") {
            if (cerca(parola, c) == true) {
                trovato = true;
                cout << trovato << endl;
                cin >> parola;
            } else {
                trovato = false;
                cout << trovato << endl;
                cin >> parola;
            }
        }
    }