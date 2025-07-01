#include<stdio.h>
int main(){
    int time[] = {365,30,1};
    int N,ratios[3],rat,i;
    scanf("%d",&N);
    i = 0;
    while(i<=2){
        rat = N/time[i];
        ratios[i] = rat;
        N = N%time[i];
        i++;
    }
    printf("%d ano(s)\n",ratios[0]);
    printf("%d mes(es)\n",ratios[1]);
    printf("%d dia(s)\n",ratios[2]);
}
