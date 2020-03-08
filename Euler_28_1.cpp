#include <iostream>
using namespace std;

int main() {
    int sum = 1;
    for (int l = 3; l <= 1001; l += 2) {
        sum += 4 * l * l - 6 * l + 6;
    }
    cout << sum;
    return 0;
}
//sum = 4(3 ^ 2 + 5 ^ 2 + 7 ^ 2 + ... + 1001 ^ 2) - 6(3 + 5 + 7 + ... + 1001) + c;
//sum = 4 * () - 6 * () + c;
//3 * 3 + 5 * 5 + 7 * 7 + ... + n * n;
// 3 + 5 + 7 + ... + n;
//