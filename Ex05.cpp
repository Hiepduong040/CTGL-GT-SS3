#include <stdio.h>
#include <string.h> 

int checkPalindrome(char str[], int start, int end) {
    if(start >= end) {
        return 1;   
    }
    if(str[start] != str[end]) {
        return 0;   
    }
    return checkPalindrome(str, start + 1, end - 1);
}

int main() {
    char str[100];
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
     
    str[strcspn(str, "\n")] = 0;
    
    int result = checkPalindrome(str, 0, strlen(str) - 1); 
    if(result == 0) {
        printf("Palindrome khong hop le");
    } else {
        printf("Palindrome khong hop le");
    }
    return 0;
}
