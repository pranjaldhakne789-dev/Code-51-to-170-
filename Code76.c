#include <stdio.h>
int main() {
    int sum = 0;
    for (int i = 4; i <= 40; i += 4) {
        sum += i;
    }
    printf("Sum of multiples of 4 = %d\n", sum);
    return 0;
}