#include <iostream>
using namespace std;

int main() {
    int sum3 = (3 + 999) * 333 / 2;
    int sum5 = (5 + 995) * (995 / 5) /2;
    int sum15 = (15 + (995 / 15) * 15) * (995 / 15) / 2;
    cout << sum3 + sum5 - sum15;
    return 0;
}