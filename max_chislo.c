#include <stdio.h>

int max2(int a, int b) {
	if (a > b) {
		return a;
	} else {
		return b;
	}
}

int main() {
	int x, y;
	scanf("%d %d", &x, &y);
	
	printf("%d\n", max2(x, y));
	return 0;
}
