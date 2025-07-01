#include<stdio.h>
int main(){
    int time[] = {3600,60,1};
    int N,ratios[3],rat,i;
    scanf("%d",&N);
    i = 0;
    while(i<=2){
        rat = N/time[i];
        ratios[i] = rat;
        N = N%time[i];
        i++;
    }
    printf("%d:%d:%d\n",ratios[0],ratios[1],ratios[2]);
}
