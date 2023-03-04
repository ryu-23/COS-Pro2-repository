#include <stdio.h>
#include <string.h>  

int main()
{
    char *s1 = "hello"; 
	char s2[10] = "hello";
	
    int ret = strcmp(s1,s2);
    printf("%d\n", ret); // 같은면 0 
    
    printf("%d\n", strcmp("aaa","aaa")); // 같은면 0 
    printf("%d\n", strcmp("aab","aaa")); // aab > aaa = 1 
    printf("%d\n", strcmp("aab","aac")); // aab < aac = -1 
    return 0;
}
