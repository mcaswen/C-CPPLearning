#include<stdio.h>
#include<string.h>

void testjichu();
int main() {

	testjichu();




	return 0;
}

void testjichu() {

	char str[10];
	char str2[10];
	
	scanf_s("%s %s", str, str2, 10);
	printf("%s##%s##", str, str2);

}