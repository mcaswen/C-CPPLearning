/*
#include<stdio.h>
#include<string.h>

void testjichu();
int main() {

	char buffer[] = "";//buffer[0] == '/0'，长度为1
	testjichu();

	return 0;
}

void testjichu() {

	char str[10];
	char str2[10];
	
	//char* str3;
	//scanf_s("%s", str3); 错误，str3可能非字符串数组/指针。
	
	scanf_s("%s", str,10);
	scanf_s("%6s", str2,10);//最多读入6个字符
	printf("%s##%s##", str, str2);

}
*/