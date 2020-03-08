#include <iostream>
using namespace std;

int main() {
    int sum = 0, sun = 0;
    for (int i = 1; i <= 100; i++) {
    sum += i * i; sun += i;
    }
    cout << sun * sun - sum << endl;
    return 0;
}
