/*
#include <stdio.h>

int main() {

	int a[10];
	int i;
	int x = 0;

	for (i = 0; i < 10; i++) a[i] = 0;
	    
	printf("������0��9֮���������");
	
	scanf_s("%d", &x);
	
	if (x < 0 || x > 9 && x != -1)  printf("%d��������Ч�����������:\n", x);
	else if (x >= 0 && x <= 9) a[x]++;

	out:
	while (x != -1) {
		
		scanf_s("%d", &x);
		
		if (x >= 0 && x <= 9) {
			a[x]++;
		}
		else if (x != -1) {

			printf("%d��������Ч�����������:\n",x);
			goto out;

		}
		else break;
	}

	for (i = 0; i <= 9; i++) {

		printf("%d������%d��\n", i, a[i]);

	}

	return 0;
}
*/