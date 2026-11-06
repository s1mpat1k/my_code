#include <stdio.h>

int main() {
	int num;
	int total_sum = 0;
	int count_special = 0;
	
	while (1) {
		// Отдельно считываем число через scanf
		int read_result = scanf("%d", &num);
		
		// Если не удалось считать число — выходим
		if (read_result != 1) {
			break;
		}
		
		// Если ввели 0 — завершаем ввод
		if (num == 0) {
			break;
		}
		
		total_sum = total_sum + num;
		
		if (num % 10 == 0) {
			count_special = count_special + 1;
		}
	}
	
	printf("%d\n", total_sum);
	printf("%d\n", count_special);
	
	return 0;
}

