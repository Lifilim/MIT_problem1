#include <iostream>
#include <vector>

using namespace std;

vector<int> fib_history(int(1e9) + 7, -1);

int fib(int n) {
    if (fib_history[n] == -1) fib_history[n] = fib(n - 1) + fib(n - 2);
    return fib_history[n];
}

int main() {
    cout << "Hello, World!\n";

    fib_history[1] = 0;
    fib_history[2] = 1;

    int n;
    cout << "Enter n: ";
    cin >> n;
    fib(n);
    for (int i = 1; i <= n; ++i)
    cout << fib_history[i] << '\n';
}
