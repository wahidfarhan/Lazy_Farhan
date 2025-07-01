#include<stdio.h>
int dcmToBinary(int number)
{
    int carry,pow,ans;
    pow = 1;
    ans = 0;
    while(number>0)
    {
        carry = number%2;
        ans += carry*pow;
        pow = pow*10;
        number = number/2;
    }
    printf("%d",ans);
}
int main()
{
   int number;
   scanf("%d",&number);
   dcmToBinary(number);


}
