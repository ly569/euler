#include <iostream>
using namespace std;

//斐波那契数列:f(n) = f(n - 1) + f(n - 2)
#define N 4000000

int main() {
    int sum = 0;
    int a = 0, b = 1;
    while (a + b <= N) {
        b = a + b;
        a = b - a;
        if (b & a) continue;
        sum += b;
    }
    cout << sum;
    return 0;
}