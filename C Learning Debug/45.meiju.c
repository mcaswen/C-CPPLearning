#include<stdio.h>

enum color{RED,YELLOW,BLUE,GREEN,NUMCOLOR};

int main() {

	char* colornames[NUMCOLOR] = { "red","yellow","blue","green" };
	char *COLORNAME;
	
	printf("please enter your favourate color's code:\n");
	int num = 0;
	scanf_s("%d", &num);

	if (num >= 0 && num < NUMCOLOR) COLORNAME = colornames[num];

	else COLORNAME = "unknown";

	printf("your favourate color is %s", COLORNAME);

	return 0;
}