#include<stdio.h>
int main(){
    double pi = 3.14159;
    double R,A;
    scanf("%lf",&R);
    A = R*R;
    A = A*pi;
    printf("A=%.4lf\n",A);
    return 0;
}
