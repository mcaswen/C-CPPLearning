/*
#include<stdio.h>
#include<string.h>
void testchangliang();

int main() {

	char* str = "Hello"; //实际上是const char* str
	char word[] = "Hello";//可修改
	char line[10] = "Hello";

	testchangliang();
	
	return 0;
}

void testchangliang() {

	char *s = "Hello";
	char *s2 = "Hello";
	char s3[] = "Hello";
	//s[0] = 'S';
	s3[0] = 'B';
	
	
	printf("s的值为%p\n", s);
	printf("s2的值为%p\n", s2);//s和s2地址相同
	printf("s3的值为%p\n", s3);
	printf("s3的第一个元素为%c\n", s3[0]);

}
*/