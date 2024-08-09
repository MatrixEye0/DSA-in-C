#include<stdio.h>
int main ()
{
    int i,n,j,k,a[50][50];
    printf("Enter row size : ");
    scanf("%d",&n);
    printf("Enter colum size : ");
    scanf("%d",&k);
    printf("Enter matrix element :\n");
     for(i=0;i<n;i++)
    {
        for(j=0;j<k;j++)
        {
           printf("a[%d][%d]",i,j);    
           scanf(" %d ",&a[i][j]);
        }
    }
    
    printf(" Your Matrix\n ");
     for(i=0;i<n;i++)
    {
         for(j=0;j<k;j++)
         {
            printf("%d ",a[i][j]);
            printf("\t");
         }
           printf("\n");
    }
    
    return 0;
}