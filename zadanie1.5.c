// Упражнение 1.5. Вывод таблицы градусных преобразований в обратном порядке. 28.10.2026
#include <stdio.h>
int main () {
	float fahr, celsius;
	int lower, upper, step;
	lower = 300;
	upper = 0;
	step = 20;
	fahr = lower;
	printf("degree conversion table\n");
	printf("\nfahrenheit   celsius\n");
	while (fahr >= upper){
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%8.0f %11.1f\n", fahr, celsius);
		fahr = fahr - step;
	}
	return 0;
}
