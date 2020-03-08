#include <iostream>
using namespace std;

#define MAXX_N 400

int ans[MAXX_N + 5] = {1, 1, 0};

int main () {
    for (int i = 0; i < 100; i++) {
        for (int j = 1;j <= ans[0]; j++) ans[j] *= 1024;
        for (int j = 1;j <= ans[0]; j++) {
            if (ans[j] < 10) continue;
            ans[j + 1] += ans[j] / 10;
            ans[j] %= 10;
            ans[0] += (ans[0] == j);
        }
    }
    int sum = 0;
    for (int i = 1; i <= ans[0]; i++) {
        sum += ans[i];
    }
    cout << sum << endl;
    return 0;
}