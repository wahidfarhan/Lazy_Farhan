#include <stdio.h>

int search(int arr[], int target, int start, int end) {
    if (start > end)
        return -1;

    int mid = (start + end) / 2;

    if (arr[mid] == target)
        return mid;
    else if (arr[mid] < target)
        return search(arr, target, mid + 1, end);
    else
        return search(arr, target, start, mid - 1);
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

    int index = search(Numbers, target, 0, i - 1);
    if(index != -1)
        printf("Target found at index: %d\n", index);
    else
        printf("Target not found\n");

    return 0;
}
