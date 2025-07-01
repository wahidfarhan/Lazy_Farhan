#include<stdio.h>
#include<math.h>
int main(){
    int t,v;
    double s;
    scanf("%d",&t);
    scanf("%d",&v);
    s = (t*v)/12.00;
    printf("%.3lf\n",s);
    return 0;
}
