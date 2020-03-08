#include <iostream>
using namespace std;

int is_val(int n) {
    if (n % 3 == 0 || n % 5 == 0) return 1;
    return 0;
}

int main() {
    int sum = 0;
    for (int i = 1; i <= 1000; i++) {
        if(!is_val(i)) continue;
        sum += i;
    }
    cout << sum;
    return 0;
}