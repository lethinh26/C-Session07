#include <stdio.h>
int main() {
	int i, num[5] = {1,2,3,4,5};
	for (i = 0; i < sizeof(num)/sizeof(int); i++) {
		if (num[i] % 2 == 0) {
			num[i] += 3;
		}else {
			num[i] +=2;
		}
		if (i == 0) {
			printf("%d",num[i]);
		}else {
			printf(", %d",num[i]);
		}
	}

	return 0;
}
