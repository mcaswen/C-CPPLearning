/*
#include<stdio.h>


int main() {

	int x = 0;
	int n = 0;


	printf("请输入您要计算的整数：");
	scanf_s("%d", &x);

	n++;
	x /= 10;
	
	if (x < 0) {

		x = -x;

	}
	
	
	//个位数整除10结果为0，以此判断，每整除10位数都减1，即n+1
	while (x > 0) {

		x = x / 10;
		n++;

	}

	printf("您输入的整数为%d位数", n);


	return 0;

}
*/