#include <iostream>
#include <cmath>
using namespace std;
#define max_n 354294

int is_val(int n) {
    int x = n, tmp = 0;
    while (x) {
        tmp += (int)pow(x % 10, 5);
        x /= 10;
    }
    return tmp == n;
}

int main() {
    int sum = 0;
    for (int i = 2; i <= max_n; i++) {
        if (is_val(i)) sum += i;
    }
    cout << sum;
    return 0;
}