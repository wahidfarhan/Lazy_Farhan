#include<stdio.h>
#include <stdbool.h>
bool isPowerOfThree(int n) {
    int temp,flag;
    if(n<=0) return false;
    else if(n==1)
    {
        return true;
    }
    flag = 0;
    while(n!=0)
    {
        temp = n%3;
        if(temp>0 && n!=1)
        {
            flag = 1;
            break;
        }
        n = n/3;
    }
    if(flag==0){
        return true;
    }
    else{
        return false;
    }

}

int main()
{
  int n;
  scanf("%d",&n);
  if(isPowerOfThree(n))
  {
      printf("%d is power of three",n);
  }
  else
  {
      printf("%d is not power of three",n);
  }
  return 0;
}
