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
	
	printf("����Ϊstr�ĳ���Ϊ%d\n", cnt);
	printf("�������Ϊstr�ĳ���Ϊ%lu\n", strlen(str));

}

void teststrcmp() {

	char str1[] = "Hello";
	char str2[] = "HelLo";
	int cnt = 0;
	
	while (str1[cnt] == str2[cnt] && str1[cnt] != '\0') cnt++;
	
	int result = str1[cnt] - str2[cnt];

	printf("a - A=%d\n", 'a' - 'A');
	printf("����Ϊ��������ıȽϽ��Ϊ%d\n", result);
	printf("�������Ϊ��������ıȽϽ��Ϊ%d\n", strcmp(str1,str2)); //ʲô��˼������
	

}

void teststrcpy() {
	
	char* s2 = "hello world";
	char* s1 = (char*)malloc(strlen(s2) + 1);
	strcpy_s(s1, 100, s2);
	printf("%s\n", s1);//������·

	char str1[100] = "hello";
	char str2[] = "world";
	char* ptr1 = str1;
	char* ptr2 = str2;

	while (*ptr1++ = *ptr2++);

	printf("����Ϊ��������ĸ��ƽ��Ϊ%s\n", str1);
	
	strcpy_s(str1, 100, str2);
	printf("�������Ϊ��������ĸ��ƽ��Ϊ%s\n", str1);

	free(s1);
}

void teststrchr() {

	//Ѱ�ҵڶ���
	char* s1 = "hello";

	char* p = strchr(s1, 'l');
	
	p = strchr(p + 1, 'l');
	
	printf("%s\n", p);

    //���l֮ǰ���ַ���

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




