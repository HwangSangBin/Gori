// �������� 
#include <stdio.h>

int main()
{
	int h, i, j, temp, num;
	
	scanf("%d", &num);
	
	int array[num];
	
	for(h = 0; h < num; h++) {
		scanf("%d", array + h);
	}
	
	for (i = 0; i < num; i++) {					// num ��ŭ �ݺ�  
		for(j = 0; j < num - i; j++) {			// 0 ~ num ���� �� �ٲ�� 
			if (array[j] > array[j + 1]) {
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;�� 
			}
		}
	}
	
	for(i = 0; i < num; i++) {
		printf("%d\n", *(array + i));
	}
	return 0;
}
	
