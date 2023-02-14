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

void fibonacciQuanto(int x) {
    int i = 0;
    while (i <= x) {
        cout << fibonacci(i) << endl;
        i++;
    }
}

int main() {
    int result = fibonacci(10);
    int x = 0;
    cout << "Inserire un numero: ";
    cin >> x;
    fibonacciQuanto(x);
    return 0;

}