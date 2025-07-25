/*
#include<stdio.h>

int main() {
	int a[2] = { 1,2 };
	int* p = a;

	printf("%d\n", *(p + 1)); // p + 1 实则为p + sizeof(a[0]),即指向a数组的下一个单元

    //

	int b[11] = { 1,2,3,4,5,6,7,8,9,10,-1, };
	int *q = &b[0];

	while (*q != -1) printf("%d ", *q++);//读取当前元素，并移向下一个元素

	return 0;
}
*/

