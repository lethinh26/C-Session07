#include <stdio.h>
int main() {
	int i, min, max=0, num[5] = {1,2,3,4,5};
	for (i = 0; i < sizeof(num)/sizeof(int); i++) {
		if (num[i] > max) {
			max = num[i];
		}
	}
	min = max;
	for (i = 0; i < sizeof(num)/sizeof(int); i++) {
		if (num[i] < min) {
			min = num[i];
		}
	}
	printf("Phan tu lon nhat trong mang: %d\n", max);
	printf("Phan tu nho nhat trong mang: %d\n", min);
	
	return 0;
}
