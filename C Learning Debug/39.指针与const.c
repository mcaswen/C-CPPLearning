/*
#include <stdio.h>
void f(const int* p);
void protect(const int a[]);

int main() {

	int i;
	int* const p = &i; //表示p所指向的地址不能被修改,i可以被修改，可以通过*p修改i
	const int* q = &i; //表示无法通过*q修改i值，q所指向地址被可以修改，i值可以被修改
	int j = 1;

	*p = 99;
	//p = &j;
	q = &j;
	//*q = 88;

	f(&i); //此时在函数内部，i的值无法被修改，因为现在&i是一个指向常量的地址

	int array[] = { 0 };

	protect(array); //此时数组不会在函数内被修改，用于保护数组

	return 0;
}
*/