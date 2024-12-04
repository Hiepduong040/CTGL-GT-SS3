#include<stdio.h>
#include<stdlib.h>
int factorial(int n){
	if(n == 0){
		return 1;
	}
	return n * factorial(n - 1);
} 

int main(){
	int n;
	int *arr = NULL;
	printf("Nhap n: ");
	scanf("%d", &n);
	arr = (int *) malloc(n * sizeof(int));

	for(int i = 0; i < n; i++){
		printf("Nhap phan tu thu %d :", i + 1);
		scanf("%d", &arr[i]);
	}

	for(int i = 0; i < n; i++){
		arr[i] = factorial(arr[i]);			
	}
	printf("Cac phan tu trong mang sau khi thay doi la:");
	for (int i = 0; i< n; i++){
		printf("%d ", arr[i]);
	}
		
	return 0;
	
} 
