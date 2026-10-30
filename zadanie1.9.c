#include <stdio.h>
int main (){
	int c, space = 0;
	while ((c = getchar()) != EOF){
		if (c == ' '){
			if (space == 0){
				putchar(c);
				space = 1;
			}
		}
		else{
			putchar(c);
			space = 0;
		}
	}
	return 0;
}
