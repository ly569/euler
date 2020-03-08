#include <iostream>
using namespace std;

int is_val(int n, int bass) {
    int x = n, tmp = 0;
    while (x) {
        tmp = tmp * bass + x % bass;
        x /= bass;
    }
    return tmp == n;
}

int main() {
    int ans = 0;
    for (int i = 100; i < 1000; i++) {
        for (int j = i;j < 1000;j++) {
            if(is_val(i * j, 10) && i * j > ans) ans = i * j;
        }
    }
    cout << ans << endl;
    return 0;
}