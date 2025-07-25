
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

	//计算总分钟
	int minute1_total = hour1 * 60 + minute1;    
	int minute2_total = hour2 * 60 + minute2;
	
	//计算总分钟差
	int minute_total = abs(minute1_total - minute2_total) ; 
	
	//int类型整数除法只保留整数部分
	int hour = minute_total / 60 ;
	
	//取余即为剩余分钟数
	int minute = minute_total % 60 ;
	
	
	printf("两时刻差值为：%d小时%d分钟", hour, minute);

	return 0;
    
}
*/