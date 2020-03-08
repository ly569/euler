#include <iostream>
#include <cstring>
using namespace std;
#define MAX_N 1000

int r_len[MAX_N + 5];

int get_len(int d) {
    memset(r_len, 0, sizeof(r_len));
    int r = 2, t = 1;
    r_len[r] = 1;
    while (r) {
        r *= 10;
        r %= d;
        t += 1;
        if (r_len[r]) return t - r_len[r];
        r_len[r] = t;
    }
    return 0;
}

int main () {
    int d = 0, len = -1;
    for (int i = 2; i < MAX_N; i++) {
        int tmp = get_len(i);
        if (len < tmp) {
            len = tmp;
            d = i;
        }
    }
    cout << d<< endl;
    cout << len << endl;
    return 0;
}