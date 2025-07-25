/*
#include <stdio.h>

void change(int ,int );

int main() {

	int a = 5;
	int b = 6;

	change(a, b);

	printf("a=%d b=%d", a, b); //a与b的值未交换，change中所定义的参数为形式变量，与main中的a,b无关
	                           //值只能被返回给函数。
	return 0;
}

void change(int a, int b) {

	int t;

	t = a;
	a = b;
	b = t;

}
*/

