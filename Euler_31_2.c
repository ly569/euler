/*************************************************************************
	> File Name: 1_1.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月22日 星期日 15时42分04秒
 ************************************************************************/
#include <stdio.h>
#define MAX_N 8
#define MAX_M 200

int w[MAX_N  + 5] = {
    1, 2, 5, 10, 20, 50, 100, 200
};

int f[MAX_M + 5] = {0};

int main() {
	f[0] = 1;
	for (int i = 0; i < MAX_N; i++) {
		for (int j = 1; j <= MAX_M; j++) {
			if (j >= w[i]) f[j] += f[j - w[i]];
		}
	}
	printf("%d\n", f[MAX_M]);
	return 0;
}