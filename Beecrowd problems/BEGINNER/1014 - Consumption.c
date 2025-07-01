#include<stdio.h>
int main(){
    int km;
    double li;
    scanf("%d",&km);
    scanf("%lf",&li);
    printf("%.3lf km/l\n",(km/li));
    return 0;
}
