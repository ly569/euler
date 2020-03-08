#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int num[10];
    for (int i = 0; i < 10; i++) num[i] = i;
    int k = 1000000 - 1;
    do {
        next_permutation(num, num + 10);
        k--;
    } while(k);
    for (int i = 0; i < 10; i++) {
        cout << num[i];
    }
    cout << endl;
    return 0;
}