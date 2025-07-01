#include <stdio.h>

int mySqrt(int x) {
    if (x == 0) return 0;

    long long i = 1;
    while (i * i <= x) {
        i++;
    }

    return i - 1;
}

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    printf("Square root (floor) of %d is %d\\n", x, mySqrt(x));

    return 0;
}
