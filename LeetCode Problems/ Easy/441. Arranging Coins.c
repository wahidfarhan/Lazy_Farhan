#include <stdio.h>

int arrangeCoins(int n) {
    int i = 1, count = 0;

    while (n >= i) {
        n -= i;
        i++;
        count++;
    }

    return count;
}

int main() {
    int n;
    printf("Enter number of coins: ");
    scanf("%d", &n);
    printf("You can form %d complete rows.\\n", arrangeCoins(n));
    return 0;
}
