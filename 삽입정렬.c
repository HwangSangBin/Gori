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
			j--;					// ��� ������  �������� �̵��ϸ鼭 �� �� 
		}
	}
	
	for (i = 0; i < num; i++) {
		printf("%d\n", *(array + i));
	}
	return 0;
}
