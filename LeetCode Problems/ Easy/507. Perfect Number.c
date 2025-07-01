#include <stdio.h>
#include <stdbool.h>

bool checkPerfectNumber(int num) {
    if (num <= 1) {
        return false;
    }
    int sum = 1;
    int maxNum = num;
    for (int i = 2; i < maxNum; i++) {
        if (num % i == 0) {
            maxNum = num / i;
            sum += i;
            sum += maxNum;
        }
        if (sum > num) {
            break;
        }
    }
    return sum == num;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (checkPerfectNumber(n)) {
        printf("%d is a perfect number.\n", n);
    } else {
        printf("%d is not a perfect number.\n", n);
    }

    return 0;
}
