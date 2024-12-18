#include <stdio.h>
int main() {
	int i, num[5];
	for (i = 0; i < sizeof(num)/sizeof(int); i++) {
		printf("Nhap phan tu thu %d: ", i+1);
		scanf("%d", &num[i]);
	}
	for (i = 0; i < sizeof(num)/sizeof(int); i++) {
		printf("%d ", num[i]);
	}
	
	return 0;
}
