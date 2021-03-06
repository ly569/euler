#include <iostream>
using namespace std;
#define MAX_N 10000

int f[MAX_N + 5] = {0};

void init() {
    for (int i = 2; i <= MAX_N; i++) {
        for (int j = 1; j * j <= i; j++) {
            if (i % j) continue;
            f[i] += j;
            f[i] += i / j;
        }
        f[i] -= i;
    }
    return ;
}

int main () {
    init();
    long long sum = 0;
    for (int i = 2; i < MAX_N; i++) {
        if (f[i] != i && f[i] < MAX_N && i == f[f[i]]) sum += i;
    }
    cout << sum << endl;
    return 0;
}