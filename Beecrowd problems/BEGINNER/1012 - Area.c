#include<stdio.h>
int main(){
    double a,b,c,TRIANGLE,CIRCUL,TRAPEZIAM,QUADRO,REQTANGLE;
    scanf("%lf %lf %lf",&a,&b,&c);
    TRIANGLE = 0.5*a*c;
    CIRCUL = 3.14159*c*c;
    TRAPEZIAM = 0.5*(a+b)*c;
    QUADRO = b*b;
    REQTANGLE = a*b;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",
           TRIANGLE,CIRCUL,TRAPEZIAM,QUADRO,REQTANGLE);
    return 0;
}
