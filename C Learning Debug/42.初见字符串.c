/*
#include<stdio.h>
#include<string.h>
void testchangliang();

int main() {

	char* str = "Hello"; //ʵ������const char* str
	char word[] = "Hello";//���޸�
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
	
	
	printf("s��ֵΪ%p\n", s);
	printf("s2��ֵΪ%p\n", s2);//s��s2��ַ��ͬ
	printf("s3��ֵΪ%p\n", s3);
	printf("s3�ĵ�һ��Ԫ��Ϊ%c\n", s3[0]);

}
*/