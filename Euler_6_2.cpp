#include <iostream>
using namespace std;

int main () {
    int sum1 = 5050;
    int sum2 = (2 * (100 * 100 * 100) + 3 * (100 * 100) + 100) / 6;
    cout << sum1 * sum1 - sum2 << endl;
    return 0;
}