#include <stdio.h>

int main()
{
	int i, j, num, temp;
	
	scanf("%d", &num);
	
	int array[num];
	
	for (i = 0; i < num; i++) {
		scanf("%d", array + i);
	}
	
	for (i = 0; i < num; i++) {
		j = i;
		while (array[j] > array[j + 1]) {
			temp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = temp;
			j--;					// 계속 작으면  왼쪽으로 이동하면서 값 비교 
		}
	}
	
	for (i = 0; i < num; i++) {
		printf("%d\n", *(array + i));
	}
	return 0;
}
