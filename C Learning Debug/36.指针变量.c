/*
#include<stdio.h>

int* p, * q;//p,q����ָ�����
int i;
void f(int *x);
int main() {

	printf("%p\n", &i);
	f(&i);//�ں�����ͨ��ָ����ʿ���ı���
	printf("i=%d", i);
	
	return 0;
}

void f(int *x) { //�ڱ�����ʱ���ĳ�������ĵ�ַ

	int *j = x;
    *j = 5;

	printf("%p\n", j);
	printf("%d\n", *x);
}
*/