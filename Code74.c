#include <stdio.h>
int main() {
    for (char c = 'A'; c <= 'Z'; c++) {
        if (c == 'X') continue;
        printf("%c ", c);
    }
    return 0;
}