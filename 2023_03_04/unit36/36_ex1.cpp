#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	char s1[10];
	
	printf("���ڿ��� �Է��Ͻÿ�");
	scanf("%s",s1); // %[^\n]s ����� �Է°��� 
	
	printf("%s\n", s1);
	
	/*int c1 = getchar();
	printf("%d\n",c1);
	printf("%d\n",EOF);
	*/
	
	return 0;
}
