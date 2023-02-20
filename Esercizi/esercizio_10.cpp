//
// Created by Guea serge on 15/02/2023.
//

/*      Chiedi nome e cognome.
 *      Stampa «ciao nome cognome»
 */
#include <string>
#include <iostream>


using namespace std;

string nome, cognome;

int main() {
    cout << "Inserisci il tuo nome: ";
    cin >> nome;
    cout << "Inserisci il tuo cognome: ";
    cin >> cognome;
    cout << "Ciao " << nome << " " << cognome << endl;
    return 0;
}
