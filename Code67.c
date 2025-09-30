#include <stdio.h>
int main() {
    int result = 1;
    for (int i = 1; i <= 7; i++) {
        result *= 2;
        printf("2^%d = %d\n", i, result);
    }
    return 0;
}