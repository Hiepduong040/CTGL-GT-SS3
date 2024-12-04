#include <stdio.h>

int sumArray(int arr[], int n, int i) {
    if(i >= n) {
        return 0;
    } 
    return arr[i] + sumArray(arr, n, i+1);
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
     
    if(n <= 0) {
        printf("n phai lon hon 0\n");
        return 1;
    }
    
    int arr[n]; 
    for(int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
     
    printf("Mang vua nhap:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
     
    printf("Tong cac phan tu: %d\n", sumArray(arr, n, 0));
    
    return 0;
}
