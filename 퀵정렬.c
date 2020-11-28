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
	
	int pivot = start;			// array[0]을 pivot으로 설 정 
	int low = start + 1;		// 왼쪽 출발지점 지정 
	int high = end;				// 오른쪽 출발지점 지정
	int temp;
	
	while(low <= high) {
		
		while(array[low] <= array[pivot]) {				//pivot 값보다 큰 값을 만날 때까지 
			low++;
		} 
		while(array[high] >= array[pivot] && (high > start)) {		//pivot 값보다 작은 값을 만날 때까지 
			high--; 
		}
		
		if (low > high) {					// 엇갈렸을 때 
			temp = array[high];
			array[high] = array[pivot];
			array[pivot] = temp;
		}
		
		else {								// 엇갈리지 않았다. pivot 전후까지 계속해서 자리 바꾸기 
			temp = array[high];
			array[high] = array[low];
			array[low] = temp;
		}
	}
	
	quick(array, start, high - 1); 		// 왼쪽 		high가 엇갈린 지점이므로 - 1 과 + 1을 통해  안엇갈린 제자리로 이동 
	quick(array, high + 1, end);		// 오른쪽 
	// 하나의 pivot값으로 정렬을 모두 수행했다면 왼쪽과 오른쪽으로 나눠서 또다시 퀵정렬 수행 
}
