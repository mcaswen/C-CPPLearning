/*
#include <stdio.h>

int main() {

	int a[10];
	int i;
	int x = 0;

	for (i = 0; i < 10; i++) a[i] = 0;
	    
	printf("请输入0到9之间的整数：");
	
	scanf_s("%d", &x);
	
	if (x < 0 || x > 9 && x != -1)  printf("%d的输入无效，请继续输入:\n", x);
	else if (x >= 0 && x <= 9) a[x]++;

	out:
	while (x != -1) {
		
		scanf_s("%d", &x);
		
		if (x >= 0 && x <= 9) {
			a[x]++;
		}
		else if (x != -1) {

			printf("%d的输入无效，请继续输入:\n",x);
			goto out;

		}
		else break;
	}

	for (i = 0; i <= 9; i++) {

		printf("%d出现了%d次\n", i, a[i]);

	}

	return 0;
}
*/