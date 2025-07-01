#include<stdio.h>
int main(){
    double Number;
    scanf("%lf",&Number);
    if(Number<=25.00 && Number>=0){
        printf("Intervalo [0,25]\n");
    }
    else if(Number>25.00 && Number <=50.00)
    {
        printf("Intervalo (25,50]\n");
    }
    else if(Number>50.00 && Number <=75.00)
    {
        printf("Intervalo (50,75]\n");
    }
    else if(Number>75.00 && Number <=100.00)
    {
        printf("Intervalo (75,100]\n");
    }
    else if(Number>100 || Number<0){
        printf("Fora de intervalo\n");
    }
    return 0;
}
