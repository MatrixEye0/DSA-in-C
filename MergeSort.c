#include <stdio.h>

void print(int* a, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

void merge(int a[], int low, int mid, int high) {
    int i, j, k, b[10];
    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high) {
        if (a[i] < a[j]) {
            b[k] = a[i];
            i++;
        } else {
            b[k] = a[j];
            j++;
        }
        k++;
    }
    while (i <= mid) {
        b[k] = a[i];
        k++;
        i++;
    }
    while (j <= high) {
        b[k] = a[j];
        k++;
        j++;
    }
    for (i = low; i <= high; i++) {
        a[i] = b[i];
    }
}

void mergeSort(int a[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}

int main() {
    int a[] = {56, 98, 23, 64, 91, 48, 12, 31};
    int n = sizeof(a) / sizeof(a[0]);
    
    printf("Array before merge sort:\n");
    print(a, n);
    
    printf("Array after merge sort:\n");
    mergeSort(a, 0, n - 1);
    print(a, n);
    
    return 0;
}
