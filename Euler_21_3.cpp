#include <iostream>
using namespace std;
#define MAX_N 10000

int f[MAX_N + 5] = {0};

void init() {
    for (int i = 1; i <= MAX_N; i++) {
        for (int j = 2; i * j <= MAX_N; j++) {
            f[i * j] += i;
        }
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