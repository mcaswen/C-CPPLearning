/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS 1

void teststrlen();
void teststrcmp();
void teststrcpy();
void teststrchr();

int main() {

	//teststrlen();
	//teststrcmp();
	//teststrcpy();
	teststrchr();

	return 0;
}


void teststrlen() {

	char str[100];

	scanf_s("%s", str,100);

	printf("%s\n", str);

	int cnt = 0;

	while (str[cnt] != '\0') 
		cnt++;
	
	printf("我认为str的长度为%d\n", cnt);
	printf("计算机认为str的长度为%lu\n", strlen(str));

}

void teststrcmp() {

	char str1[] = "Hello";
	char str2[] = "HelLo";
	int cnt = 0;
	
	while (str1[cnt] == str2[cnt] && str1[cnt] != '\0') cnt++;
	
	int result = str1[cnt] - str2[cnt];

	printf("a - A=%d\n", 'a' - 'A');
	printf("我认为两个数组的比较结果为%d\n", result);
	printf("计算机认为两个数组的比较结果为%d\n", strcmp(str1,str2)); //什么构思编译器
	

}

void teststrcpy() {
	
	char* s2 = "hello world";
	char* s1 = (char*)malloc(strlen(s2) + 1);
	strcpy_s(s1, 100, s2);
	printf("%s\n", s1);//常用套路

	char str1[100] = "hello";
	char str2[] = "world";
	char* ptr1 = str1;
	char* ptr2 = str2;

	while (*ptr1++ = *ptr2++);

	printf("我认为两个数组的复制结果为%s\n", str1);
	
	strcpy_s(str1, 100, str2);
	printf("计算机认为两个数组的复制结果为%s\n", str1);

	free(s1);
}

void teststrchr() {

	//寻找第二个
	char* s1 = "hello";

	char* p = strchr(s1, 'l');
	
	p = strchr(p + 1, 'l');
	
	printf("%s\n", p);

    //输出l之前的字符串

	char s2[] = "hello";
	char* q = strchr(s2, 'l');
	char c = *q;
	*q = '\0';
	char* s3 = (char*)malloc(strlen(s2) + 1);
	
	strcpy_s(s3, 100, s2);
	
	printf("%s\n", s3);
	
	*q = c;
	free(s3);

}

*/




