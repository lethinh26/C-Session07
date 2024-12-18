#include <stdio.h>
int main() {
	int i,j, value;
	printf("Nhap so cot cua mang 2 chieu: ");
	scanf("%d", &i);
	printf("Nhap so hang cua mang 2 chieu: ");
	scanf("%d", &j);
	int num[i][j];
	for (i = 0; i < sizeof(num)/sizeof(num[0]); i++) {
		for (j = 0; j < sizeof(num[0])/sizeof(num[0][0]); j++) {
			printf("Nhap phan tu thu %d cua cot %d: ", j,i);
			scanf("%d", &value);
			num[i][j] = value;
		}
	}
	for (i = 0; i < sizeof(num)/sizeof(num[0]); i++) {
		for (j = 0; j < sizeof(num[0])/sizeof(num[0][0]); j++) {
			printf("%4d ",num[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
