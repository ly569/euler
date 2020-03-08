#include <iostream>
#include <cmath>
using namespace std;
#define MAX_N 33

int gcd(int a, int b) {
    return (b ? gcd(b, a % b) : a);
}

int is_val(int a, int b, int c) {
    int ans = 0;
    for (int n = 1; n <= MAX_N; n++) {
        for (int m = n + 1; m <= MAX_N; m++) {
            if (!gcd(m, n)) continue;
            int a = 2 * n * m;
            int b = m * m - n * n;
            int c = m * m + n * n;
            if (!(1000 % (a + b + c))) {
                int k = 1000 / (a + b + c);
                ans = a * b * c * (int)pow(k, 3);
            }
            if (ans) break;
        }
    }
    return ans;
}

int main() {
    int a, b, c;
    cout << is_val(a, b, c) << endl;
    return 0;
}