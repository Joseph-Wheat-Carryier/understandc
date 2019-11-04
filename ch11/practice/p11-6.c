#include<stdio.h>
#include<string.h>

char *str_chnum(const char *s,int c){
	int length = strlen(s);
		while(*s++){
		if(*s==c+48){
			return s;
		}
	}
	return NULL;
}

int main(void){
	char *s = "ad1319384738291847cdefg039201";
	printf("我是%c\n",*str_chnum(s,1));
}