#include <stdio.h>

int sum_array(int arr[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i = i + 1) {
		sum = sum + arr[i];
	}
	return sum;
}

int main() {
	int n;
	int arr[100];
	scanf("%d", &n);

	for (int i = 0; i < n; i = i + 1) {
		scanf("%d", &arr[i]);
	}
	
	printf("%d\n", sum_array(arr, n));
	return 0;
}
