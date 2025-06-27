#include<stdio.h>
int Selection_sort(int arr[],int size)
{
    int z = 0;
    int SI,j,temp;
    while(z<size-1)
    {
        SI = z;
        j = z+1;
        while(j<=size)
        {
            if(arr[SI]>arr[j])
            {
                SI = j;
            }
            j++;
        }
        temp = arr[SI];
        arr[SI] = arr[z];
        arr[z] = temp;
        z++;
    }
    int l =0;
    while(l<=size)
    {
        printf("%d ",arr[l]);
        l++;
    }
}
int main()
{
    int i,Numbers[100];
    i = 0;
    char c;
    while(scanf("%d%c",&Numbers[i],&c)==2)
    {
        if(c=='\n')
        {
            break;
        }
        i++;
    }
    Selection_sort(Numbers,i);

}
