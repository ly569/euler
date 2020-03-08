#include <iostream>
using namespace std;
#define N 600851475143LL

int main() {
    long long ans = 0, M = N;
    long long i = 2;
    while (i * i <= M) {
        if (M % i == 0) ans = i;//1.为什么ans一定是素因子？
        while (M % i == 0) M /= i;//将倍数去除
        i += 1;
    }
    if (M > 1) ans = M;//2.这一行代码为什么是必要的？
    cout << ans;
    return 0;
}
//1.i起始从2开始，所有二的倍数都被除去了。(参考素数筛)
//2.M为1或者非1。