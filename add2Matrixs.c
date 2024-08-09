#include<stdio.h>

int main()
{
    int i, n1, k1, n2, k2, j, a[50][50], b[50][50], c[100][100];
    
    printf("Enter first row size: ");
    scanf("%d", &n1);
    
    printf("Enter first column size: ");
    scanf("%d", &k1);
    
    printf("Enter first matrix elements:\n");
    for(i = 0; i < n1; i++)
    {
        for(j = 0; j < k1; j++)
        {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Enter second row size: ");
    scanf("%d", &n2);
    
    printf("Enter second column size: ");
    scanf("%d", &k2);
    
    printf("Enter second matrix elements:\n");
    for(i = 0; i < n2; i++)
    {
        for(j = 0; j < k2; j++)
        {
            printf("b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    
    if (n1 != n2 || k1 != k2)
    {
        printf("Matrix addition is not possible. The matrices should have the same dimensions.\n");
        return 0;
    }
    
    for(i = 0; i < n1; i++)
    {
        for(j = 0; j < k1; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    
    printf("First Matrix:\n");
    for(i = 0; i < n1; i++)
    {
        for(j = 0; j < k1; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    
    printf("Second Matrix:\n");
    for(i = 0; i < n2; i++)
    {
        for(j = 0; j < k2; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    
    printf("Matrix After addition|_|+|_|=|_|\n");
    for(i = 0; i < n1; i++)
    {
        for(j = 0; j < k1; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
