#include <stdio.h>

int binomialCoefficient(int n, int k) { 
    if(k == 0 || k == n) {
        return 1;
    } 
    return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
}

int main() {
    int n, k;
    
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap k: ");
    scanf("%d", &k);
     
    if(n < 0 || k < 0 || k > n) {
        printf("Gia tri khong hop le! n va k phai khong am va k phai nho hon hoac bang n.\n");
        return 1;
    }
    
    printf("C(%d,%d) = %d\n", n, k, binomialCoefficient(n, k));
    return 0;
}
