//
// Created by gueas on 14/02/2023.
//


/*
 Scrivere un programma che generi la
sequenza di Fibonacci fino a un numero N
inserito dall'utente. La sequenza di Fibonacci
è definita come segue:
F(0) = 0, F(1) = 1
F(n) = F(n-1) + F(n-2) per n > 1
 */


#include <iostream>
#include <string>
#include <cmath>



using namespace std;

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

//  ho provato con while

void fibonacciQuanti(int x) {
    int i = 0;
    int n = 0;
    while (i <= x) {
        n = fibonacci(i);
        cout << n << endl;
        i++;
    }
}

int main() {
    //int result = fibonacci(10);
   // cout << result << endl; // ho provato a stampare fino a 10
    fibonacciQuanti(15); // ho provato a stampare fino a 15
    return 0;

}