#include <stdio.h>
int main() {
	int i,j, value;
	printf("Nhap so cot cua mang 2 chieu: ");
	scanf("%d", &i);
	printf("Nhap so hang cua mang 2 chieu: ");
	scanf("%d", &j);
	int num[i][j];
	int sizeRow = sizeof(num)/sizeof(num[0]);
	int sizeCol = sizeof(num[0])/sizeof(num[0][0]);
	for (i = 0; i < sizeRow; i++) {
		for (j = 0; j < sizeCol; j++) {
			printf("Nhap phan tu thu %d cua cot %d: ", j,i);
			scanf("%d", &value);
			num[i][j] = value;
		}
	}
	for (i = 0; i < sizeRow; i++) {
		for (j = 0; j < sizeCol; j++) {
			if (i == 0 || i == (sizeRow-1)) {
				printf("%d ", num[i][j]);
			}else if (i > 0 && i < (sizeRow-1)) {
				if (j == 0 || j == (sizeCol-1)) {
					printf("%d ", num[i][j]);
				}
			}
		}
	}
	
	return 0;
}
