#include <iostream>
using namespace std;

int gcd(int a, int b) {
    return (b ? gcd(b, a % b) : a);
}

int main() {
    int ans = 1;
    for (int i = 1; i <= 20; i++) {
        if (ans % i == 0) continue ;
        ans *= i / gcd(ans, i);
    }
    cout << ans;
    return 0;
}