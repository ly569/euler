#include <iostream>
using namespace std;

int main() {
    long long n = 40, m = 20, ans = 1;
    while (m > 1) {
        if (n > 20) ans *= (n--);
        if (m && ans % m == 0) ans /= (m--);
    }
    cout << ans << endl;
    return 0;
}

/*int main () {
    long long n = 40, m = 20, ans = 1;
    while (n != 20 || m) {
        if (n != 20) ans *= (n--);
        if (m != 0 && ans % m == 0) ans /= (m--);
    }
    cout << ans << endl;
    return 0;
}*/