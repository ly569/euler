#include <iostream>
using namespace std;

//斐波那契数列:f(n) = f(n - 1) + f(n - 2)

#define max_n 44
#define N 4000000

int fib[max_n + 5];

int main() {
    fib[1] = 1, fib[2] = 2;
    long long sum = 0;
    for (int i = 3; i <= max_n && fib[i - 1] + fib[i - 2] <= N; i++) {
        fib[i] = fib[ i - 1] + fib[i - 2];
        if (fib[i] & 1) continue;
        sum += fib[i];
    }
    cout << sum;
    return 0;
}