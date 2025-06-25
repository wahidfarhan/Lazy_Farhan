#include<stdio.h>
int main(){
    int Numbers[3],SavedNumbers[3],i;
    scanf("%d %d %d",&Numbers[1],&Numbers[2],&Numbers[3]);
    if(Numbers[1]>Numbers[2]){
        if(Numbers[3]>Numbers[1]){
            SavedNumbers[1] = Numbers[3];
        }
        else{
            SavedNumbers[1] = Numbers[1];
        }
    }
    else if(Numbers[2]>Numbers[1]){
        if(Numbers[3]>Numbers[2]){
            SavedNumbers[1] = Numbers[3];
        }
        else{
            SavedNumbers[1] = Numbers[2];
        }
    }
    i = 0;
    while(i<=2){
        printf("%d",SavedNumbers[i]);
        i++;
    }
    return 0;
}
