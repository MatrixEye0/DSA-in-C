#include<stdio.h>

int main() {
    int i,j,n,swap,a[10] ;
    printf("Enter Array size: ");
    scanf("%d", &n);
    printf("Enter Array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i <n; i++) 
    {
        for(j=i+1;j<n;j++)
        {
           if(a[j]<a[i])
           {
               swap=a[i];
               a[i]=a[j];
               a[j]=swap;
           }
        }
    }
    printf("Array after selection sort :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}