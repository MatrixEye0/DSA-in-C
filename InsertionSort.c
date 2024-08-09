#include<stdio.h>

int main() {
    int i,j,n,key,a[10] ;
    printf("Enter Array size: ");
    scanf("%d", &n);
    printf("Enter Array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 1; i <n; i++) 
    {
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    printf("Array after insertion sort :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}