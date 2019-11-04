#include<stdio.h>

char* str_copy(char *d,const char *s){
	char *t =d;
	while (*d++ = *s++);
	return t;
}

int main(void){
	char str[128] = "ABC";
	char tmp[128];
	printf("str=\"%s\"\n",str);

	printf("复制的是:");
	scanf("%s",tmp);

	

	puts("复制了。");
	printf("str1=\"%s\"\n",str_copy(str,tmp));

	return 0 ;
}