#include<stdio.h>
int main(){
    int number,hour;
    double endsal,sal;
    scanf("%d",&number);
    scanf("%d",&hour);
    scanf("%lf",&sal);
    endsal = hour*sal;
    printf("NUMBER = %d\n",number);
    printf("SALARY = U$ %.2lf\n",endsal);
    return 0;
}
