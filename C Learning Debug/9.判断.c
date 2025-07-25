/*
#include <stdio.h>

int main() {

	int hour1 = 0;
	int hour2 = 0;
	int minute1 = 0;
	int minute2 = 0;


	printf("请输入第一时刻:（格式：点 分）");
	scanf_s("%d %d", &hour1, &minute1);

	printf("请输入第二时刻（格式 点 分）");
	scanf_s("%d %d", &hour2, &minute2);

	int hour = hour2 - hour1;
	int minute = minute2 - minute1;
    
	//分钟差小于0需借位
	if (minute < 0) {
		minute = 60 + minute;
		hour--;
    
	}
 
	printf("两时刻差值为：%d小时%d分钟", hour, minute);

	return 0;

}
*/ 