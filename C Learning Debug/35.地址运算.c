/*
#include<stdio.h>

int main() {

	int i = 0;
	int p ;
	// p = (int) &(i + p); 错误，只能取变量的地址	

	//输出不同
	printf("%p\n", &i);
	printf("%p", &p);

	
	//原理
	printf("%lu\n", sizeof(int));
	printf("%lu\n", sizeof(&i));
	
	int a[10];

	//&a == a == &a[0], 数组中相邻元素的差距是4个字节
	
	printf("%p\n", &a);
	printf("%p\n", a);
	printf("%p\n", &a[0]);
	printf("%p\n", &a[1]);
	
	return 0;
}
*/