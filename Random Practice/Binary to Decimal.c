#include<stdio.h>
int BinaryToDecimal(int number)
{
    int carry,pow,ans;
    pow = 1;
    ans = 0;
    while(number>0)
    {
        carry = number%10;
        number = number/10;
        ans = ans+(pow*carry);
        pow = pow*2;
    }
    printf("%d\n",ans);
}

int main()
{
   int number;
   scanf("%d",&number);
   BinaryToDecimal(number);
   return 0

}
