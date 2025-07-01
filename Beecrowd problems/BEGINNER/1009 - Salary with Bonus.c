#include<stdio.h>
int main(){
    char name[100];
    double endsal,sal;
    scanf("%s",name);
    scanf("%lf",&endsal);
    scanf("%lf",&sal);
    endsal = endsal + (sal*0.15);
    printf("TOTAL = R$ %.2lf\n",endsal);
    return 0;
}
