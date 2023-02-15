//
// Created by gueas on 14/02/2023.
//

//Scrivo le 12 funzioni che mi servono per risolvere il problema del coltellino svizzero


#include <iostream>
#include <string>


using namespace std;
// funzione 1
// creo la prima funzione che mi permette di trovare il minimo tra due numeri


int piuGrande(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

// funzione 2

// creo la funzione con bool isEven che mi permette di trovare se un numero è pari o no

bool isEven(int x) {
    if (x % 2 == 0) {
        return true;
    } else {
        return false;
    }
}


// funzione 3

//creo la funzione con double costoTotale che mi permette di trovare il costo totale e interesse di un prodotto
double costoTotale( double prezzo, double interesse) {
    for (int i = 0; i < 10; ++i) {
        prezzo = prezzo + (prezzo * interesse);
        if (isEven(prezzo)) {
            return prezzo;
        }

    }

}


// funzione 4

//creo una funziona con void buttaFuori che mi permette di trovare eta'

void buttaFuori(int eta) {
    if (eta < 18) {
        cout << "Non puoi entrare";
    } else {
        cout << "Puoi entrare";
    }
}

// funzione 5

//creo una funziona con void decrescente che mi permette di trovare i numeri in ordine decrescente

void decrescente(int a,int b , int c) {
if (a > b && a > c) {
        cout << a << endl;
        if (b > c) {
            cout << b << endl;
            cout << c << endl;
        } else {
            cout << c << endl;
            cout << b << endl;
        }
    } else if (b > a && b > c) {
        cout << b << endl;
        if (a > c) {
            cout << a << endl;
            cout << c << endl;
        } else {
            cout << c << endl;
            cout << a << endl;
        }
    } else if (c > a && c > b) {
        cout << c << endl;
        if (a > b) {
            cout << a << endl;
            cout << b << endl;
        } else {
            cout << b << endl;
            cout << a << endl;
        }
    }

}

// funzione 6

//creo una funziona con void stampaNome che mi permette di stampare il nome

void stampaNome(string nome) {
    cout << nome << endl;
    if (nome.length() == 0) {
        cout << "SERGE" << endl;
    }
    if (nome.length() == 1) {
        cout << "SERGE" << endl;
    }

}



// funzione 7

//creo una funziona con bool isBetween che mi permette di trovare se un numero è compreso tra due numeri

bool isBetween(int a, int b, int c) {
    if (a > b && a < c) {
        return true;
    } else {
        return false;
    }
}

// funzione 8

//creo una funziona con equazione

void equazione(int a, int b, int c) {
    int delta = (b * b) - (4 * a * c);
    if (delta < 0) {
        cout << "L'equazione non ha soluzioni reali" << endl;
    } else if (delta == 0) {
        cout << "L'equazione ha una soluzione reale" << endl;
    } else {
        cout << "L'equazione ha due soluzioni reali" << endl;
    }
}

// funzione 9

//creo una funzione con bool bisestile che mi permette di trovare se un anno è bisestile o no

bool bisestile(int a, int b, int c) {
    if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0) {
        return true;
    } else {
        return false;
    }
}

// funzione 10

// creo una funzione con void stampaTabellina che mi permette di stampare la tabellina di un numero n

void stampaTabellina(int n) {
    for (int i = 1; i <= 10; i++) {
        cout << n << " * " << i << " = " << n * i << endl;
    }
    cout << endl;
}

// funzione 11

//creo una funzione con void stampaTabelline che mi permette di stampare le tabelline n e m

void stampaTabelline(int n, int m) {
    for (int i = n; i <= m; i++) {
        stampaTabellina(i);
    }
    cout << stampaTabellina<< endl;
}

// funzione 12

//creo una funziona con void stampaPari (int quanti) che mi permette di stampare i primi n numeri pari

void stampaPari(int quanti, int n) {
    for (int i = 1; i <= 2; i++) {
        if (isEven(n)) {
            cout << n << endl;
        }
        n++;
    }
}

int main() {
    int result = piuGrande(5, 10);
    cout << result << endl;
    cout << isEven(10) << endl;
    cout << costoTotale(10, 0.1) << endl;
    buttaFuori(20);
    decrescente(10, 20, 30);
    stampaNome("Serge");
    cout << isBetween(10, 20, 30) << endl;
    equazione(1, 2, 3);
    cout << bisestile(2000, 2004, 2008) << endl;
    stampaTabellina(5);
    stampaPari(2, 3);

    return 0;
}

