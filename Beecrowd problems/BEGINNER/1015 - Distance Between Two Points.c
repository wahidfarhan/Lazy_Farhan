#include<stdio.h>
#include<math.h>
int main(){
    double x[2],y[2],dis;
    scanf("%lf %lf",&x[1],&y[1]);
    scanf("%lf %lf",&x[2],&y[2]);
    dis = sqrt(pow((x[1]-x[2]),2)+pow((y[1]-y[2]),2));
    printf("%.4lf\n",dis);

    return 0;
}
