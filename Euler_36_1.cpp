#include <iostream>
using namespace std;
#define max_n 1000000

int is_val(int n, int bass) {
    int x = n, tmp = 0;
    while (x) {
        tmp = tmp * bass + x % bass;
        x /= bass;
    }
    return tmp == n;
}

int main () {
    int bass2, bass10, sum = 0;
    for (int i = 0;i <= max_n; i++){
        bass2 = is_val(i, 2);
        bass10 = is_val(i, 10);
        if (bass2 && bass10) sum += i;
    }
    cout << sum << endl;
    return 0;
}