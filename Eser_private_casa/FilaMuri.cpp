//
// Created by gueas on 14/02/2023.
//

// Esercizio 2

/*
 *C'è una fila di  muri N  in Geeksland. Il re di Geeksland ha ordinato ad Alexa di colorare tutte le pareti in occasione del capodanno.
 * Alexa può colorare ogni parete di rosa, nero o giallo. Il costo associato alla colorazione di ogni parete con un particolare
 * colore è rappresentato da un array 2D colors di dimensione N*3  , dove  colors[i][0] ,  colors[i][1] e  colors[i][2]  è il costo
 * della tinteggiatura della parete rispettivamente con i colori rosa, nero e giallo.

*Devi trovare il costo minimo per colorare tutte le pareti in modo che non ci siano due pareti adiacenti dello stesso colore.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>

using namespace std;

int main()
{
    int muriN = 0;
    int colors[3][3] = {0};
    int i = 0;
    int j = 0;
    int k = 0;
    int min = 0;
    int min2 = 0;
    int min3 = 0;
    int min4 = 0;
    int min5 = 0;

    cout << "Inserisci il numero di muri: ";
    cin >> muriN;
    cout << "Inserisci i costi di colorazione: ";
    for (i = 0; i < muriN; i++) {
        for (j = 0; j < 3; j++) {
            cin >> colors[i][j];
        }
    }
    for (i = 0; i < muriN; i++) {
        for (j = 0; j < 3; j++) {
            cout << colors[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Inserisci il numero di colori: ";
    for (i = 0; i < muriN; i++) {
        for (j = 0; j < 3; j++) {
            cin >> colors[i][j];
        }
    }
    for (i = 0; i < muriN; i++) {
        for (j = 0; j < 3; j++) {
            cout << colors[i][j] << " ";
        }
        cout << endl;
    }

    for (i = 0; i < muriN; i++) {
        for (j = 0; j < 3; j++) {
            if (colors[i][j] < colors[i][j + 1]) {
                min = colors[i][j];
            } else {
                min = colors[i][j + 1];
            }
        }
    }
    cout << "Il costo minimo è: " << min << endl;

    for (i = 0; i < muriN; i++) {
        for (j = 0; j < 3; j++) {
            if (colors[i][j] < colors[i][j + 1]) {
                min2 = colors[i][j];
            } else {
                min2 = colors[i][j + 1];
            }

            if (colors[i][j] < colors[i][j - 1]) {
                min3 = colors[i][j];
            } else {
                min3 = colors[i][j - 1];
            }

            if (colors[i][j] < colors[i][j - 2]) {
                min4 = colors[i][j];
            } else {
                min4 = colors[i][j - 2];
            }

            if (colors[i][j] < colors[i][j - 3]) {
                min5 = colors[i][j];
            } else {
                min5 = colors[i][j - 3];
            }
        }

    }

}

