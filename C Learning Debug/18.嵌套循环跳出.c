/*
#include <stdio.h>

int main() {

	int one = 0;
	int two = 0;
	int five = 0;
	int x = 0;
	int True = 0;
	
	printf("请输入您要拼凑的金额：");
	scanf_s("%d", &x);


	
	for (one = 1; one < x * 10; one++) {

		for (two = 1; two < x * 5; two++) {

			for (five = 1; five < x * 2; five++) {

				if (one + two * 2 + five * 5 == x*10) {

					printf("%d个一角，%d个两角，%d个五角合%d元\n", one, two, five, x);
					
					goto out;
					//True = 1;
					//break;

				}

			}
			
			if (True == 1) {

				break;
		    }
		    
		}
	
		if (True == 1) {

			break;
		}
	    
	}
	out:

	return 0;
}
*/