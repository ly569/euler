#include <stdio.h>
#include <inttypes.h>

#define MAX_N 3000

int32_t Cube(int32_t n) {
    return n * n * n;
}

int32_t IsCube(int32_t a) {
    int32_t range = a;
    if (a < 0) range = -a;
    int32_t max_n = range, min_n = -range;
    int32_t mid_n = (max_n + min_n) >> 1;
    while (min_n <= max_n) {
        if (Cube(mid_n) == a) break;
        if (Cube(mid_n) < a) {
            min_n = mid_n + 1;
        } else {
            max_n = mid_n - 1;
        }
        mid_n = (max_n + min_n) >> 1;
    }
    return Cube(mid_n) == a;
}

int32_t main() {
    printf("%d\n", IsCube(55));
    printf("%d\n", IsCube(27));
    printf("%d\n", IsCube(-27));
    return 0;
}