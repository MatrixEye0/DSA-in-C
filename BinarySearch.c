#include<stdio.h>

int main() {
    int i, start, n, mid, end, s, arr[20];
    printf("Enter First Array Size: ");
    scanf("%d", &n);
    printf("Enter First Array Elements:\n");
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    start = 0;
    end = n - 1;
    mid = (start + end) / 2;
    printf("Enter Search element: ");
    scanf("%d", &s);
    
    while ((start <= end) && (arr[mid] != s)) {
        if (s < arr[mid])
            end = mid - 1;
        else
            start = mid + 1;
                mid = (start + end) / 2;
    }
    
    if (arr[mid] == s)
        printf("Search Element found at position %d\n", mid);
    else
        printf("Search Element not found\n");
    
    return 0;
}