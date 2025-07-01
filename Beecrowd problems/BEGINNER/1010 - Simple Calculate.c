#include<stdio.h>
int main(){
    int product[2][2];
    double productVal[2],productValproduct[2];
    scanf("%d %d %lf",&product[1][1],&product[1][2],&productVal[1]);
    productValproduct[1] = productVal[1]*product[1][2];
    scanf("%d %d %lf",&product[2][1],&product[2][2],&productVal[2]);
    productValproduct[2] = productVal[2]*product[2][2];
    printf("VALOR A PAGAR: R$ %.2lf\n",productValproduct[1]+productValproduct[2]);

    return 0;
}
