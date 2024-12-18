#include <stdio.h>
int main() {
	int i, check = 1, num[5] = {1,2,3,4,5};
	for (i = 0; i < sizeof(num)/sizeof(int); i++) {
		if (num[i] % 2 == 0) {
			check = 0;
			printf("%d ", num[i]);
		}
	}
	
	if (check) {
		printf("Khong co so chan!");
	}
	
	return 0;
}
