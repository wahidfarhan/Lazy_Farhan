#include<stdio.h>
int main(){
    double a,b,SOMA,c;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    SOMA = ((a*2)+(b*3)+(c*5))/(2+3+5);
    printf("MEDIA = %.1lf\n",SOMA);
    return 0;
}
