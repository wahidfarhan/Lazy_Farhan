#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, s, area;
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        area = a+b+c;
        printf("Perimetro = %.1lf\n", area);
    } else {
        area = 0.5*(a+b)*c;
        printf("Area = %.1lf\n",area);
    }

    return 0;
}
