#include<stdio.h>

int main() {
    int i, k, n, j = 0, b[50], a[50], m[100];
    printf("Enter first Array size: ");
    scanf("%d", &n);
    printf("Enter first Array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter second Array size: ");
    scanf("%d", &k);
    printf("Enter second Array elements:\n");
    for (i = 0; i < k; i++) {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < n; i++) {
        m[j] = a[i];
        j++;
    }
    for (i = 0; i < k; i++) {
        m[j] = b[i];
        j++;
    }
    printf("Array after merge:\n");
    for (i = 0; i < n + k; i++) {
        printf("%d ", m[i]);  // Add a space or separator between elements
    }

    return 0;
}
