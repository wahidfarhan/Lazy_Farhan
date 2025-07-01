#include<stdio.h>
int main(){
    double volume,carry;
    int R;
    scanf("%d",&R);
    carry = (4.0/3)*3.14159;
    volume = carry*R*R*R;
    printf("VOLUME = %.3lf\n",volume);
    return 0;
}
