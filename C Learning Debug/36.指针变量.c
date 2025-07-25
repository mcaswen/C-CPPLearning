/*
#include<stdio.h>

int* p, * q;//p,q都是指针变量
int i;
void f(int *x);
int main() {

	printf("%p\n", &i);
	f(&i);//在函数中通过指针访问块外的变量
	printf("i=%d", i);
	
	return 0;
}

void f(int *x) { //在被调用时获得某个变量的地址

	int *j = x;
    *j = 5;

	printf("%p\n", j);
	printf("%d\n", *x);
}
*/