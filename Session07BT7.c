#include <stdio.h>
int main() {
	int i;
	printf("Nhap vao so phan tu co trong mang: ");
	scanf("%d", &i);
	int num[i];
	for (i = 0; i < sizeof(num)/sizeof(int); i++) {
		while(1) {
			printf("Nhap phan tu thu %d: ", i+1);
			scanf("%d", &num[i]);
			if (num[i] % 2 != 0) {
				break;
			}else {
				printf("Phan tu nhap vao phai la so le! Hay nhap lai\n");
			}
		}
		
	}
	
	for (i = 0; i < sizeof(num)/sizeof(int); i++) {
		printf("%d ", num[i]);
	}
	
	return 0;
}
