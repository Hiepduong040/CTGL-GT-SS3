#include <stdio.h>
 
int sumRecursive(int n, int m) {
    if (n > m) {
        return 0;  
    }
    if (n == m) {
        return n;  
    }
    return n + sumRecursive(n + 1, m); 
}

int main() {
    int n, m;
 
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap m: ");
    scanf("%d", &m);
 
    if (n > m) {
        printf("n phai nho hon hoac bang m.\n");
        return 1;
    }
 
    int result = sumRecursive(n, m);
 
    printf("Tong tu %d den %d la: %d\n", n, m, result);

    return 0;
}

