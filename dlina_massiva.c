#include <stdio.h>
int main (){
	int a[100] = {1, -2, 7, 4, 0, 5};
	int i;
	int c = 0;
	for (i = 0; a[i] != 0; i = i + 1){
		c = c + 1;
	}
	printf("%d", c);
	return 0;
}
