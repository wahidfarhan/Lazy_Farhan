#include <stdio.h>

int sumdigit(int number)
{
    int gen, som;
    som = 0;
    while(number != 0)
    {
        gen = number % 10;
        number = number / 10;
        som = gen + som;
    }
    return som;
}

int addDigits(int num) {
    while(num > 10)
    {
        num = sumdigit(num);
    }
    if(num == 10)
    {
        return 1;
    }
    return num;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = addDigits(num);
    printf("The single digit sum is: %d\n", result);

    return 0;
}
