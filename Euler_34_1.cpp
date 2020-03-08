#include <iostream>
using namespace std;
#define max_n 2903040

int keep[10] = {0};

int numbs(int n) {
    if (keep[n]) return keep[n];
    if (n == 0) return 1;
    if (n == 1) return 1;
    return keep[n] = n * numbs(n - 1);
}

int is_val(int n) {
    int x = n; int temp = 0;
    while (x) {
        temp += numbs(x % 10);
        x /= 10;
    }
    return temp == n;
}

int main() {
    int sum = 0;
    for (int i = 3; i <= max_n; i++) {
        if(is_val(i)) sum += i;
    }
    cout << sum;
    return 0;
}
