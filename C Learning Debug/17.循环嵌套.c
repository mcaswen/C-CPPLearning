/*
#include<stdio.h>
int main() {

	int x = 2;
	int y = 1000;
	int t = 2;
	int True = 1;

	printf("正在计算100以内的素数\n");

	while (x < 100) {

		while (t < x/2) {

			if (x % t == 0) {

				True = 0;
				break;

			}

			t++;

		} 

		//重置变量
		t = 2;

		if (True == 0) {

			x++;
			
			//注意重置变量
			True = 1;
			
			continue;
		}
		
		printf("%d,", x);
		x++;

	}

	if (x == 100) {

		printf("以上整数都为素数\n");

	}

	return 0;
}
*/