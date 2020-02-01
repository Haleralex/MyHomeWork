#include <stdio.h>
#include <stdlib.h>
///Саня бля, ну кто так пишет, че за хуйня
///какого хуя у тебя сортировка прям в мейне,
///ну ебать, можно было и в отдельный метод вынести,
///ну пиздец, Саня, ебать тебя в очко!
int main() {
	srand(time(NULL));
	int array[15];
	for (int i = 0; i < 15; i++) {
		array[i] = rand() % 10 - 5;
		printf("%d  ", array[i]);
	}
	printf("%c", '\n');
	for (int i = 1; i < 15; i++) {
		int j = i - 1;
		int k = i;
		while (array[k] < array[j]) {
			int l = array[k];
			array[k] = array[j];
			array[j] = l;
			k = j;j--;
		}
	}
	for (int i = 0; i < 15; i++) {
		printf("%d  ", array[i]);
	}
	system("pause");
	return 0;
}
