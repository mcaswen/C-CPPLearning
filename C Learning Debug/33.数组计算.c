/*
#include <stdio.h>

int search(int a[], int key, int len);

void exa(int loc);

int key_given();

int main() {

	int a[] = { 1,999,43,6,2,43,97,45,32,23 };
	//int b[] = a;  ���Ϸ� 
	int i,key,loc,len;

	//������ռ�ֽڴ�С���Ե���Ԫ�ش�С��Ϊ����Ԫ�ظ���
	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++) printf("%-4d", a[i]); 

	printf("\n����ĳ���Ϊ��%d\n", i);

	key = key_given();
	
	len = i;
	
	loc = search(a,key,len);
	
	exa(loc);
	
	return 0;
}

int key_given() {

	int x;
	printf("���������������Ĺؼ��֣�\n");

	scanf_s("%d", &x);

	return x;

}

int search(int a[], int key, int len) {
	int j;
	int loc = -1;
	
	for (j = 0; j < len; j++) {

		if (a[j] == key) {

			loc = j+1;

		}

	}
	return loc;

}

void exa(int loc) {

	if (loc != -1) printf("�ؼ���λ�������%dλ", loc);

	else printf("�ؼ����������в�����");

}
*/