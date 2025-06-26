#include<stdio.h>

int search(int arr[], int target, int size) {
    int start = 0, end = size - 1, mid;

    while(start <= end) {
        mid = (start + end) / 2;
        if(target > arr[mid]) {
            start = mid + 1;
        } else if(target < arr[mid]) {
            end = mid - 1;
        } else {
            return mid;
        }
    }
    return -1;
}

int main() {
    int Numbers[100];
    int i = 0, target;
    char c;

    printf("Enter sorted numbers: ");
    while(scanf("%d%c", &Numbers[i], &c) == 2) {
        i++;
        if(c == '\n') {
            break;
        }
    }

    printf("Enter Target: ");
    scanf("%d", &target);

    int index = search(Numbers, target, i);
    if(index != -1)
        printf("Target found at index: %d\n", index);
    else
        printf("Target not found\n");

    return 0;
}
