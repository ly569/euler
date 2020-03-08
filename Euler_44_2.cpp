#include <iostream>
#include <inttypes.h>
using namespace std;
typedef long long ll;

ll Pentagonal(ll n) {
        return n * (3 * n - 1) / 2;
}

ll binary_search(ll (*func)(ll), ll n, ll x) {
    ll head = 1, tail = n, mid;
    while (head <= tail) {
        mid = (head + tail) >> 1;
        if (func(mid) == x) return mid;
        if (func(mid) < x) head = mid + 1;
        else tail = mid - 1;
    }
    return 0;
}

int main() {
    ll n = 2, D = INT32_MAX, pk, pj;
    while (Pentagonal(n) - Pentagonal(n - 1) < D) {
        pk = Pentagonal(n);
        for (ll j = n - 1; j >= 1; j--) {
            pj = Pentagonal(j);
            if (pk - pj >= D) break;
            int flag = 1;
            flag = binary_search(Pentagonal, 2 * n, pk + pj);
            flag = flag && binary_search(Pentagonal, n, pk - pj);
            if (flag) {
                D = pk - pj;                
            }          
        }
        n += 1;    
    }
    cout << D << endl;
    return 0;
}
