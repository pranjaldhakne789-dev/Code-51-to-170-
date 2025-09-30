#include <stdio.h>
int main() {
    for (int i = 32; i <= 126; i++) {
        printf("%d = %c\n", i, (char)i);
    }
    return 0;
}