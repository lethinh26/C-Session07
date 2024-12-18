#include <stdio.h>
int main() {
	int i;
	printf("Nhap vao so phan tu co trong mang: ");
	scanf("%d", &i);
	int num[i];
	for (i = 0; i < sizeof(num)/sizeof(int); i++) {
		printf("Nhap phan tu thu %d: ", i+1);
		scanf("%d", &num[i]);
	}
	
	for (i = 0; i < sizeof(num)/sizeof(int); i++) {
		printf("%d ", num[i]);
	}
	
	return 0;
}
