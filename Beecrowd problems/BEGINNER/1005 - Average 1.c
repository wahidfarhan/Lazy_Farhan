#include<stdio.h>
int main(){
    double a,b,SOMA;
    scanf("%lf",&a);
    scanf("%lf",&b);
    SOMA = ((a*3.5)+(b*7.5))/(3.5+7.5);
    printf("MEDIA = %.5lf\n",SOMA);
    return 0;
}
