#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	char s1[10];
	
	printf("문자열을 입력하시오");
	scanf("%s",s1); // %[^\n]s 공백기 입력가능 
	
	printf("%s\n", s1);
	
	/*int c1 = getchar();
	printf("%d\n",c1);
	printf("%d\n",EOF);
	*/
	
	return 0;
}
