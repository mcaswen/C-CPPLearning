/*
#include<stdio.h>


int main() {

	int score = 0;
	int type = 0;
	char grade;
	printf("请输入您的成绩：");
	scanf_s("%d", &score);

	//利用整除取十位数来确定类型
	type = score / 10;


	switch (type) {
	case 10:	
	case 9:
		grade = 'A';
		break;
	case 8:
		grade = 'B';
		break;
	case 7:
		grade = 'C';
		break;
	case 6:
		grade = 'D';
		break;
	default:
		grade = 'D';
		break;

	}
    
	printf("您获得的等第为%c",grade);



	return 0;
}
*/