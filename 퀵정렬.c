#include <stdio.h>

void quick(int *array, int start, int end);

int main()
{
	int i, num;
	
	scanf("%d", &num);
	
	int data[num];
	
	for (i = 0; i < num; i++) {
		scanf("%d", data + i);
	}
	
	quick(data, 0, num);
	
	for(i = 0; i < num; i++) {
		printf("%d\n", data[i]);
	} 
	
	return 0;
}

void quick(int *array, int start, int end)
{
	if (start >= end) {
		return;
	}
	
	int pivot = start;			// array[0]�� pivot���� �� �� 
	int low = start + 1;		// ���� ������� ���� 
	int high = end;				// ������ ������� ����
	int temp;
	
	while(low <= high) {
		
		while(array[low] <= array[pivot]) {				//pivot ������ ū ���� ���� ������ 
			low++;
		} 
		while(array[high] >= array[pivot] && (high > start)) {		//pivot ������ ���� ���� ���� ������ 
			high--; 
		}
		
		if (low > high) {					// �������� �� 
			temp = array[high];
			array[high] = array[pivot];
			array[pivot] = temp;
		}
		
		else {								// �������� �ʾҴ�. pivot ���ı��� ����ؼ� �ڸ� �ٲٱ� 
			temp = array[high];
			array[high] = array[low];
			array[low] = temp;
		}
	}
	
	quick(array, start, high - 1); 		// ���� 		high�� ������ �����̹Ƿ� - 1 �� + 1�� ����  �Ⱦ����� ���ڸ��� �̵� 
	quick(array, high + 1, end);		// ������ 
	// �ϳ��� pivot������ ������ ��� �����ߴٸ� ���ʰ� ���������� ������ �Ǵٽ� ������ ���� 
}
