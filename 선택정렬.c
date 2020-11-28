// 선택정렬 
#include <stdio.h>
#include <limits.h>

int main()
{
	int h, i, j, min, index, temp, num;
	
	scanf("%d", &num);
	
	int array[num];
	
	for(h = 0; h < num; h++)
	{
		scanf("%d", array + h);
	}
	
	for(i = 0; i < num; i++) {
		min = INT_MAX;
		 
		for(j = i; j < num; j++) {
			if(min > array[j]) {
				min = array[j];
				index = j;
			}
		}
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
		// swap을 한다. 
	}
	for(i = 0; i < num; i++) {
		printf("%d\n", array[i]);
	}
	
	return 0;
}
