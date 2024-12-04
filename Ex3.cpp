#include<stdio.h> 
int fibLoop(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    printf("Day Fibonacci tu 0 den %d la:\n", n);
    for (int i = 0; i <= n; i++) {
        printf("%d ", fibLoop(i));
    }

    return 0;
}

