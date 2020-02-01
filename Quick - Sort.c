#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
///8========D
///8========D
///8========D
///8========D
///8========D
///8========D
///8========D
///8========D
///8========D
int Partion(int* array, int p, int r) {
	int q;
	q = p;
	for (int i = p; i <= r - 1; i++) {
		if (array[i] < array[r]) {
			int l = array[q];
			array[q] = array[i];
			array[i] = l;
			q++;
		}
	}
	int l = array[q];
	array[q] = array[r];
	array[r] = l;
	return q;
}

void quicksort(int* array, int p, int r) {
	if (p < r) {
		int q = Partion(array, p, r);
		quicksort(array, p, q-1);
		quicksort(array, q+1, r);
        ///8========D
	}
}

int main() {
	srand(time(NULL));
    ///8========D
	int n;
	scanf_s("%d", &n);
	int* array = (int*)malloc(sizeof(int)*n);
	for (int i = 0; i < n; i++) {
		array[i] = rand() % 50 - 25;
		printf("%d  ", array[i]);
	}
	quicksort(array, 0, n-1);
	printf("%c", '\n');
    ///8========D
	for (int i = 0; i < n; i++) {
        ///8========D
		printf("%d  ", array[i]);
	}
	system("pause");
	return 0;
}
