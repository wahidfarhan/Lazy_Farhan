#include<stdio.h>
int main()
{
    int startHour,startMinit,finalHour,finalMinit,totalStart,totalFinal,finalTime,Hour,Minit;
    scanf("%d %d %d %d",&startHour,&startMinit,&finalHour,&finalMinit);
    totalStart = (60*startHour)+startMinit;
    totalFinal = (60*finalHour)+finalMinit;
    //printf("%d %d",totalStart,totalFinal);
    if(totalStart>totalFinal)
    {
        totalFinal = 1440+totalFinal;
        totalStart = totalFinal-totalStart;
        Hour = totalStart/60;
        Minit = totalStart%60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",Hour,Minit);

    }
    else if(totalStart<totalFinal){
        totalFinal = totalFinal-totalStart;
        Hour = totalFinal/60;
        Minit = totalFinal%60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",Hour,Minit);
    }
    else if(totalStart==totalFinal){
        Hour = 24;
        Minit = 0;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",Hour,Minit);
    }
    return 0;
}
