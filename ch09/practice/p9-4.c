#include<stdio.h>
#include<string.h>

void null_string(char s[]){
	int length = strlen(s);
	for(int i=0;i<length;i++){
		s[i] = '\0';
	}
}