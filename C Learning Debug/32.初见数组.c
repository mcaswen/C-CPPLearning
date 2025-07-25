
//计算输入数字的平均数，并输出所有大于平均数的数字
/*
#include <stdio.h>

int main() {

	int i = 0;
	int cnt = 0;
	int sum = 0;
	double ave = 0;
	int x = 0;

	printf("请输入数字的数量：");
	scanf_s("%d", &cnt);
	int a[100];


	printf("请输入您要计算的数字:\n");
	scanf_s("%d", &x);

	while (i < cnt) {
		a[i] = x;
		i++;
		sum += x;
		
		if (i == cnt) break;
		
		scanf_s("%d", &x);
	
	}

	if (cnt > 0) {
		ave = 1.0 * sum / cnt;
		printf("平均数为：%lf\n", ave);

	}
	printf("大于平均数的数字为：\n");
	
	for (i = 0; i < cnt; i++) {

		if (a[i] > ave) {
			printf("%d ", a[i]);

		}

	}
 
	return 0;
}
*/
