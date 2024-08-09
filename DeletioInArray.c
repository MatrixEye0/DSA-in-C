#include<stdio.h>
int main ()
{
    int i,n,p,a[50];
    printf("Enter Array size : ");
    scanf("%d",&n);
    printf("Enter Array element :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter Delet position : ");
    scanf("%d",&p);
    for(i=p-1;i<n-1;i++)
    {
        a[i]=a[i+1];   
    }
    printf("New Array :\n");
    for(i=0;i<n-1;i++)
    printf("%d\n",a[i]);
    return 0;
}