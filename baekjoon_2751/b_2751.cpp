#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int number, data[1000001];

void Quicksort(int *data, int start, int end) {
	if (start >= end) {
		return;
	}
	int pivot = start;
	int L = start + 1, R = end, temp;

	while (L <= R) {
		while (data[L] <= data[pivot])	L++;
		while (data[R] >= data[pivot] && R > start)	R--;

	if (L > R) {
		temp = data[R];
		data[R] = data[pivot];
		data[pivot] = temp;
	}
	else {
		temp = data[L];
		data[L] = data[R];
		data[R] = temp;
	}
}
	Quicksort(data, start, R - 1);
	Quicksort(data, R + 1, end);
	
}

int main(void) {
	scanf("%d", &number);
	for (int i = 0; i < number; i++) {
		scanf("%d", &data[i]);
	}
	Quicksort(data, 0, number - 1);
	for (int i = 0; i < number; i++) {
		printf("%d\n", data[i]);
	}

}