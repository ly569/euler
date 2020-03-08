#include <iostream>
using namespace std;

int is_val(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main () {
    int i, cnt;
    for (i = 2, cnt = 0; cnt < 10001; i++) {
        if (is_val(i)) cnt += 1;
    }
    cout << i - 1 << endl;
    return 0;
}