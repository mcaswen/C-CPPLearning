/*
#include<stdio.h>
int main() {

	int x = 2;
	int y = 1000;
	int t = 2;
	int True = 1;

	printf("���ڼ���100���ڵ�����\n");

	while (x < 100) {

		while (t < x/2) {

			if (x % t == 0) {

				True = 0;
				break;

			}

			t++;

		} 

		//���ñ���
		t = 2;

		if (True == 0) {

			x++;
			
			//ע�����ñ���
			True = 1;
			
			continue;
		}
		
		printf("%d,", x);
		x++;

	}

	if (x == 100) {

		printf("����������Ϊ����\n");

	}

	return 0;
}
*/