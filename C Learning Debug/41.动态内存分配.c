/*
#include<stdio.h>
#include<stdlib.h>

void getarray(int*,int);
void printarray(int*, int);
void reversearray(int*, int);
void testspace();

int main() {

	
	int x;
	printf("请输入数组元素个数：\n");
	scanf_s("%d", &x);
	
	int* a = (int*)malloc(x * sizeof(int));

	getarray(a, x);

	printarray(a, x);
	printf("\n");
	reversearray(a, x);
	

	testspace();
	

	return 0;
}

void getarray(int* a,int x) {
	int j;
	
	for (int i = 0; i < x; i++) {
		j = i + 1;
		*(a + i) = j;

	}
}

void printarray(int* a, int x) {
	
	int* p = a;
	
	while (p <= a + x - 1) printf("%d ", *p++);
}

void reversearray(int* a, int x) {
	
	int* p = a + x - 1 ;

	while (*p >= *a) printf("%d ", *p--);
}

void testspace() {

	int** p = NULL;
	int cnt = 0;
	while (1) {

		p = (int**)realloc(p, (cnt + 1)*sizeof(int*));
		
		p[cnt] = malloc(100 * 1024 * 1024);
		
		if (p[cnt] == NULL) break;
		
		cnt++;
	}
	
	printf("分配了%d00mb内存空间", cnt);
	
	while (cnt > 0) free(p[cnt--]);

	free(p);
}
*/

