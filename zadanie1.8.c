#include <stdio.h>
int main (){
	int c, space = 0, tab = 0, end_str = 0; 
	while ((c = getchar()) != EOF){
		if (c == ' '){
			++space;
		}
		else if (c == '\t'){
			++tab;
		}
		else if(c == '\n'){
			++end_str;
		}
	}	
	printf("space = %d, tab = %d, end_str = %d\n", space, tab, end_str);
}
