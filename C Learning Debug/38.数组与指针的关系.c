/*
#include <stdio.h>

// void array(int *);
// void array(int *a);
// void array(int a[]);
// void array(int []);
//以上四种定义方式等价

int main() {

	int a[1], * p;

	a[0] = 0;
	p = a;
	int* const b;
	printf("p[0]=%d\n", p[0]);//p[0]等价于*p
	printf("*a=%d\n", *a);//*a等价于a[0]
	//b = a 报错，数组变量相当于b，是无法修改的指针常量。

	return 0;

}
*/