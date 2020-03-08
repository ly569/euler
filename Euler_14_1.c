#include <stdio.h>
#define MAN_N 1000000

typedef long long ll;

ll get_len(ll n) {
    if (n == 1) return 1;
    if (!(n & 1)) return get_len(n >> 1) +1;
    return get_len(3 * n + 1) + 1;
}

int main() {
    ll ans = 0, len = 0;
    for (int i = 1; i < MAN_N; i++) {
        ll tmp = get_len(i);
        if (tmp > len) {
            ans = i;
            len = tmp;
        }
    }
    printf("num = %lld, len = %lld\n", ans, len);
    return 0;
}