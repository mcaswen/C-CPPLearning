/*
#include <stdio.h>
void f(const int* p);
void protect(const int a[]);

int main() {

	int i;
	int* const p = &i; //��ʾp��ָ��ĵ�ַ���ܱ��޸�,i���Ա��޸ģ�����ͨ��*p�޸�i
	const int* q = &i; //��ʾ�޷�ͨ��*q�޸�iֵ��q��ָ���ַ�������޸ģ�iֵ���Ա��޸�
	int j = 1;

	*p = 99;
	//p = &j;
	q = &j;
	//*q = 88;

	f(&i); //��ʱ�ں����ڲ���i��ֵ�޷����޸ģ���Ϊ����&i��һ��ָ�����ĵ�ַ

	int array[] = { 0 };

	protect(array); //��ʱ���鲻���ں����ڱ��޸ģ����ڱ�������

	return 0;
}
*/