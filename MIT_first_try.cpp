#include <iostream>

using namespace std;

int fib(int n) {
    if (n == 1) return 1;
    if (n == 2) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    cout << "Hello, World!\n";
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << fib(n);
}
