#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

void merge(int* array, int p, int q, int r) {
	int* A = (int*)malloc(sizeof(int)*(q - p + 2));
	int* B = (int*)malloc(sizeof(int)*(r - q + 1));
	A[q - p + 1] = 1000;
	B[r - q] = 1000;
	for (int i = 0; i < q - p + 1; i++)
		A[i] = array[p + i];
	for (int i = 0; i < r - q; i++)
		B[i] = array[q + 1 + i];
	int x = 0;
	int y = 0;
	for (int i = p; i <= r; i++) {
		if (A[x] < B[y]) {
			array[i] = A[x];
			x++;
		}
		else {
			array[i] = B[y];
			y++;
		}
	}
	free(A);
	free(B);
}

void mergesort(int* array, int p, int r) {
	if (p < r) {
		int q = (p + r) / 2;
		if ((r-p == 1)&&(array[r]<array[p])) {
			int k = array[p];
			array[p] = array[r];
			array[r] = k;
		}
		else {
			mergesort(array,p,q);
			mergesort(array,q+1,r);
			merge(array,p,q,r);
		}
	}
}

int main() {
	srand(time(NULL));
	int n;
	scanf_s("%d", &n);
	int* array = (int*)malloc(sizeof(int)*n);
	for (int i = 0; i < n; i++) {
		array[i] = rand() % 50 - 25;
		printf("%d  ", array[i]);
	}
	mergesort(array, 0, n-1);
	printf("%c", '\n');
	for (int i = 0; i < n; i++) {
		printf("%d  ", array[i]);
	}
	system("pause");
	return 0;
}