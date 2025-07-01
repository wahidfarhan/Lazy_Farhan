#include<stdio.h>
void retriver(double percentage,double salary)
{
    double totalsalary,increase;
    increase = salary*percentage;
    totalsalary = salary+increase;
    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %.0lf %%\n",totalsalary,increase,percentage*100);

}
int main()
{
    double salary;
    scanf("%lf",&salary);
    if(salary<=400.00){
        retriver(0.15,salary);
    }
    else if(400.01<=salary && salary<=800.00){
        retriver(0.12,salary);
    }
    else if(800.01<=salary && salary<=1200.00){
        retriver(0.1,salary);
    }
    else if(1200.01<=salary && salary<=2000.00){
        retriver(0.07,salary);
    }
    else if(salary>=2000.00){
        retriver(0.04,salary);
    }
    return 0;
}
