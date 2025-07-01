#include<stdio.h>
int main(){
    int a,b,c,major;
    scanf("%d %d %d",&a,&b,&c);
    if(a<=b){
        if(b>=c){
            printf("%d eh o maior\n",b);
        }
        else{
            printf("%d eh o maior\n",c);
        }
    }
    else{
        if(a>=c){
            printf("%d eh o maior\n",a);
        }
        else{
            printf("%d eh o maior\n",c);
        }
    }
    return 0;
}
