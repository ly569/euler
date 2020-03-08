#include <iostream>
using namespace std;

#define max_n 200000

int prime[max_n + 5] = {0};

void init() {
    for (int i = 2;i <= max_n; i++) {
        if(!prime[i]) continue;
        for (int j = i * i; j <= max_n; j += i) {
            prime[j] = 1;
        }
    }
    for (int i = 2; i <= max_n; i++) {
        !prime[i] && (prime[++prime[0]] = i);
    }
    return ;
}

int main () {
    init();
    cout << prime[10001] << endl;
    return 0;
}
//prime[++prime[0]] = i;
//prime[0] += 1;
//prime[prime[0]] = i;