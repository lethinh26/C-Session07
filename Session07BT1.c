#include <stdio.h>
int main() {
	int i, num[5] = {1,2,3,4,5};
	for (i = 0; i < sizeof(num)/sizeof(int); i++) {
		printf("%d ", num[i]);
	}
	printf("\nDo dai mang: %d", sizeof(num)/sizeof(int));
	return 0;
}
