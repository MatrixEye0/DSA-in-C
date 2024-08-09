#include<stdio.h>
int main ()
{
    int i,n,a[50];
    printf("Enter first Array size : ");
    scanf("%d",&n);
    printf("Enter first Array element :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array after Reverse  :\n ");
    for(i=n-1;i>=0;i--)
    printf("%d\n",a[i]);
    
    return 0;
}
