#include <iostream>
using namespace std;

int fib(int n) {
    if(n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}

void printFib(int n) {
    for(int i=0; i<n; i++)
        cout << fib(i) << " ";
}

int main() {
    int n;
    cin >> n;
    printFib(n);
    return 0;
}

