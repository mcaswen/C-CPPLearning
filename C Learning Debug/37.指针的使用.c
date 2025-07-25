/*

#include<stdio.h>

void swap(int* pa, int* pb);
void minmax(int a[], int n, int *min,int *max);

int main() {

	int a = 5; int b = 6;

	int* p,* q;
	
	p = &a; q = &b; //需先给指针变量分配内存
	
	swap(p, q);

	printf("a=%d,b=%d", a, b);

	//
	
	int array[] = { 1,2,3,4,5,6,7,8,4,43,23,4,35,46,434,34132 };
	int n = sizeof(array) / sizeof(int);	
	int max, min;
	
	minmax(array, n, &min, &max);
	
	printf("数列的最大值为%d，数列的最小值为%d\n", max, min);
	
	return 0;

}

void swap(int* pa, int* pb) {

	int t = *pa;
	*pa = *pb;
	*pb = t;

}

void minmax(int a[], int n, int* min, int* max) {

	*min = *max = a[0];
	for (int i = 0; i < n; i++) {

		if (a[i] > *max) *max = a[i];
		
		if (a[i] < *min) *min = a[i];

	}

}
*/