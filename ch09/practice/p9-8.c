#include<stdio.h>
#include<string.h>

void put_stringr(const char s[]){
	int length = strlen(s);
	char rvs[100] = {0};
	for(int i=0;i<length;i++){
		rvs[i] = s[length-1-i];
	} 
	printf("%s\n",rvs);
}

int main(void){
	char s[] = "abcdefg";
	put_stringr(s);
}