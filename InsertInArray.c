#include<stdio.h>

int main() {
    int i,n,j,k,value,a[20];
    printf("Enter array size : ");
    scanf("%d",&n);
    printf("Enter array :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter insert position : ");
    scanf("%d",&j);
    printf("Enter new element : ");
    scanf("%d",&value);
    for(i=n;i>=j;i--)
    {
        a[i]=a[i-1];
        a[j]=value;
        n++;
    }
    printf("Array after insertion : \n");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
    
    return 0;
}