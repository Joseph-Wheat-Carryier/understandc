#include<stdio.h>
#include<string.h>

int str_chnum(const char *s,int c){
	int length = strlen(s);
	int count=0;
	while(*s++){
		if(*s==c+48){
			count++;
		}
	}

	return count;
}

int main(void){
	char *s = "ad1319384738291847cdefg039201";
	printf("有%d个\n",str_chnum(s,1));
}