/*
#include<stdio.h>
#include<string.h>

void testjichu();
int main() {

	char buffer[] = "";//buffer[0] == '/0'������Ϊ1
	testjichu();

	return 0;
}

void testjichu() {

	char str[10];
	char str2[10];
	
	//char* str3;
	//scanf_s("%s", str3); ����str3���ܷ��ַ�������/ָ�롣
	
	scanf_s("%s", str,10);
	scanf_s("%6s", str2,10);//������6���ַ�
	printf("%s##%s##", str, str2);

}
*/