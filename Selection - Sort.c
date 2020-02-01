//Selection Sort integer

#include <stdio.h>
#include <stdlib.h>

#define URqt //right down here ur qt.
//i think this solution (for novice) not so dusty

///Хуев те в код пес!
///8========D
///8========D
///8========D
///8========D
///8========D
///8========D
///8========D
///8========D
///8========D
int main() {
	int array[URqt];
	srand(time(NULL));
	for (int i = 0; i < URqt; i++) {
		array[i] = rand() % 10 - 5;
		printf("%d  ", array[i]);
	}
	printf("%c", '\n');
	int minI = 0;
	for (int i = 0; i < URqt; i++) {
		int minimum = array[i];
		for (int j = i + 1; j < URqt; j++) {
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
	for (int i = 0; i < URqt; i++) {
		printf("%d  ", array[i]);
	}
	system("pause");
	return 0;
}
