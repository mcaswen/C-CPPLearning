/*
#include <stdio.h>

int search(int a[], int key, int len);

void exa(int loc);

int key_given();

int main() {

	int a[] = { 1,999,43,6,2,43,97,45,32,23 };
	//int b[] = a;  不合法 
	int i,key,loc,len;

	//数组所占字节大小除以单个元素大小即为数组元素个数
	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++) printf("%-4d", a[i]); 

	printf("\n数组的长度为：%d\n", i);

	key = key_given();
	
	len = i;
	
	loc = search(a,key,len);
	
	exa(loc);
	
	return 0;
}

int key_given() {

	int x;
	printf("请输入您想搜索的关键字：\n");

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

	if (loc != -1) printf("关键字位于数组第%d位", loc);

	else printf("关键字在数组中不存在");

}
*/