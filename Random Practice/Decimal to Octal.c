#include<stdio.h>
void decimalToOctal(int number)
{
    int carry,ans,pow;
    pow = 1;
    ans = 0;
    while(number>0)
    {
        carry = number%8;
        number = number/8;
        ans = ans+(pow*carry);
        pow = pow*10;
    }
    printf("%d",ans);
}

int main()
{
   int number;
   scanf("%d",&number);
   decimalToOctal(number);

}
