#include<stdio.h>
int main(){
    int p,a;
    scanf("%d %d",&p,&a);
    double b = a;
    if(p==1){
        printf("Total: R$ %.2lf\n",b*4.00);
    }
    else if(p==2){
        printf("Total: R$ %.2lf\n",b*4.50);
    }
    else if(p==3){
        printf("Total: R$ %.2lf\n",b*5.00);
    }
    else if(p==4){
        printf("Total: R$ %.2lf\n",b*2.00);
    }
    else if(p==5){
        printf("Total: R$ %.2lf\n",b*1.50);
    }
    return 0;
}
