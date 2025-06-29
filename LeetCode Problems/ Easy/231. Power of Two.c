#include<stdio.h>
#include <stdbool.h>
bool isPowerOfTwo(int n) {
    if (n <= 0)
        return false;
    return (n & (n - 1)) == 0;
}

int main()
{
  int n;
  scanf("%d",&n);
  if(isPowerOfTwo(n))
  {
      printf("%d is power of two\n",n);
  }
  else
  {
      printf("%d is not power of two\n",n);
  }
  return 0;
}
