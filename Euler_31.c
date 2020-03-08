#include <stdio.h>
#define MAX_N 8
#define MAX_M 200

int w[MAX_N  + 5] = {
    1, 2, 5, 10, 20, 50, 100, 200
};

int f[MAX_N + 5][MAX_M + 5];

int main() {
	for (int i = 0; i < MAX_N; i++) {
		f[i][0] = 1;
		for (int j = 1; j <= MAX_M; j++) {
			f[i][j] = 0;
			if (i >= 1) f[i][j] += f[i - 1][j];
			if (j >= w[i]) f[i][j] += f[i][j - w[i]];
		}
	}
	printf("%d\n", f[MAX_N - 1][MAX_M]);
	return 0;
}
