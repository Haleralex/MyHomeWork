//Selection Sort integer

#include <stdio.h>
#include <stdlib.h>

int main() {
	int array[40];
	srand(time(NULL));
	for (int i = 0; i < 15; i++) {
		array[i] = rand() % 10 - 5;
	}
	for (int i = 0; i < 15; i++) {
		printf("%d  ", array[i]);
	}
	printf("%c", '\n');
	int minI = 0;
	for (int i = 0; i < 15; i++) {
		int minimum = array[i];
		for (int j = i + 1; j < 15; j++) {
			if (array[j] < minimum) {
				minimum = array[j];
				minI = j;
			}
		}
		if (array[i] != minimum) {
			int k = array[i];
			array[i] = minimum;
			array[minI] = k;
		}
	}
	for (int i = 0; i < 15; i++) {
		printf("%d  ", array[i]);
	}
	system("pause");
	return 0;
}