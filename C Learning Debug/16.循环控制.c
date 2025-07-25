/*
#include <stdio.h>
int main() {

	int i = 2;
	int isPrime = 0;
	int x = 0;

	printf("请输入您要判断的整数：");
	scanf_s("%d", &x);
	
	while (i < x) {
		
		if (x % i == 0) {

			isPrime = 1;
			
			//减少循环次数，提升计算效率
			
			break;
		
		}

	    i++;
	}

	if (isPrime == 1) {

		printf("非素数");

	}
	else {

		printf("是素数");

	}


	return 0;
}

*/