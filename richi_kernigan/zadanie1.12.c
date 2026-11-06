#include <stdio.h>
#define IN 1 /* внутри слова */
#define OUT 0 /* снаружи слова */
/* вывод входного потока по одному слову на строке */
int main () {
	int c, state;
	state = OUT;
	while ((c = getchar()) != EOF){
		if (c == ' ' || c == '\n' || c == '\t'){
			if (state == IN){
				putchar('\n');
				state = OUT;
			}			
		}
		else {
			putchar(c);
			state = IN;
		}		
}
	if (state == IN){
		putchar('\n');
	}
	return 0;
}
