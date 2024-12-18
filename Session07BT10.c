#include <stdio.h>
int main() {
	int i, j, check;
	printf("Nhap vao so phan tu co trong mang: ");
	scanf("%d", &i);
	int num[i];
	for (i = 0; i < sizeof(num)/sizeof(int); i++) {
		printf("Nhap phan tu thu %d: ", i+1);
		scanf("%d", &num[i]);
	}
	
	for (i = 0; i < sizeof(num)/sizeof(int); i++) {
		check = (num[i] < 2)? 0:1;
		for (j = 2; j < num[i]; j++) {
			if (num[i] % j == 0) {
				check = 0;
				break;
			}
		}
		
		if (check) {
			printf("%d ", num[i]);
		}
	}
	
	return 0;
}
