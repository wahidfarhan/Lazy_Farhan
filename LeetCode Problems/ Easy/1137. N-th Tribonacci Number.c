#include <stdio.h>

int tribonacci(int n) {
    if (n == 0) return 0;
    else if (n == 1 || n == 2) return 1;
    return tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3); 
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("The %d-th Tribonacci number is %d\\n", n, tribonacci(n));

    return 0;
}
