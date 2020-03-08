#include <iostream>
#include <inttypes.h>
using namespace std;
#define max_n 2000000
typedef int64_t int1;

int1 prime[max_n + 5] = {0};

using namespace std;

int main() {
	int1 ans = 0;
	for (int i = 2; i <= max_n; i++) {
		if (!prime[i]) prime[++prime[0]] = i;
		for (int j = 1; j <= prime[0]; j++) {
			if (prime[j] * i > max_n) break;
			prime[prime[j] * i] = 1;
			if (i % prime[j] == 0) break;
		}
	}
	for (int1 i = 1; i <= prime[0]; i++) {
		ans += prime[i];
	}
	cout << ans << endl;
	return 0;
}
