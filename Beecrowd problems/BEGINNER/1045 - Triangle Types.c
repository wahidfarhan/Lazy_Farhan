#include <stdio.h>
int main() {
    double sides[3],a,b,c;
    scanf("%lf %lf %lf",&sides[0],&sides[1],&sides[2]);
    int i,j,carry;
    i = 0;
    while(i<2){
        j = 0;
        while(j<2-i){
            if(sides[j]<sides[j+1]){
                carry = sides[j];
                sides[j] = sides[j+1];
                sides[j+1] = carry;
            }
            j++;
        }
        i++;
    }
    a = sides[0];
    b = sides[1];
    c = sides[2];
    //printf("%lf %lf %lf",a,b,c);
    if(b+c<=a){
        printf("NAO FORMA TRIANGULO\n");
        if(a==b && b==c && a==c){
        printf("TRIANGULO EQUILATERO\n");
        }
        if((a==b || b==c) && a!=c){
        printf("TRIANGULO ISOSCELES\n");
        }
    }
    else if(a*a == (b*b)+(c*c)){
        printf("TRIANGULO RETANGULO\n");
        if(a==b && b==c && a==c){
        printf("TRIANGULO EQUILATERO\n");
        }
        if((a==b || b==c) && a!=c){
        printf("TRIANGULO ISOSCELES\n");
        }
    }
    else if(a*a > (b*b)+(c*c)){
        printf("TRIANGULO OBTUSANGULO\n");
        if(a==b && b==c && a==c){
        printf("TRIANGULO EQUILATERO\n");
        }
        if((a==b || b==c) && a!=c){
        printf("TRIANGULO ISOSCELES\n");
        }
    }
    else if(a*a < (b*b)+(c*c)){
        printf("TRIANGULO ACUTANGULO\n");
        if(a==b && b==c && a==c){
        printf("TRIANGULO EQUILATERO\n");
        }
        if((a==b || b==c) && a!=c){
        printf("TRIANGULO ISOSCELES\n");
        }
    }
    /*if(a==b && b==c && a==c){
        printf("TRIANGULO EQUILATERO\n");
    }
    if((a==b || b==c) && a!=c){
        printf("TRIANGULO ISOSCELES\n");
    }*/
    return 0;
}
