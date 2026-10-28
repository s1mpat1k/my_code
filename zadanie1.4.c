// Упражнение 1.4. Перевод температур по Цельсию в шкалу Фаренгейта и вывод таблицы. 28.10.2026
#include <stdio.h>
int main () {
	float fahr, celsius;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;
	celsius = lower;
	printf("degree conversion table\n");
	printf("\ncelsius   fahrenheit\n");
	while (celsius <= upper){
		fahr = (celsius * 9.0 / 5.0) + 32.0;
		printf("%8.0f %11.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
	return 0;
}
