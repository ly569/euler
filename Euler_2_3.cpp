#include <iostream>
using namespace std;

//斐波那契数列:f(n) = f(n - 1) + f(n - 2)
//滚动数组
#define N 4000000

int main() {
    int fib[3] = {1, 2};
    int sum = 0, n = 2;
    while (fib[(n - 1) % 3] + fib[(n - 2) % 3] <= N) {
        fib[n % 3] = fib[(n - 1) % 3] + fib[(n - 2) % 3];
        if (!(fib[n % 3] & 1)) sum += fib[n % 3];
        n +=1;
    }
    cout << sum << endl;
    return 0;
}