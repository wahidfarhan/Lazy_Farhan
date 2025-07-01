#include<stdio.h>
#include<math.h>
int main(){
    int numbers[3],fakeNumbers[3],carry,i,z;
    scanf("%d %d %d",&numbers[0],&numbers[1],&numbers[2]);
    fakeNumbers[0] = numbers[0];
    fakeNumbers[1] = numbers[1];
    fakeNumbers[2] = numbers[2];
    i = 0;
    while(i<=1){
        z = 0;
            while(z<=1-i){
                    if(numbers[z]>numbers[z+1]){
                        carry = numbers[z];
                        numbers[z] = numbers[z+1];
                        numbers[z+1] = carry;
                    }
                z++;
            }
        i++;
    }
    i = 0;
    while(i<=2){
        printf("%d\n",numbers[i]);
        i++;
    }
    i = 0;
    printf("\n");
    while(i<=2){
        printf("%d\n",fakeNumbers[i]);
        i++;
    }

    return 0;
}
