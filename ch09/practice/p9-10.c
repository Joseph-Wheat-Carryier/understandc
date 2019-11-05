#include<stdio.h>
#include<string.h>
void del_digit(char s[]){
	int length = strlen(s);
	for(int i=0;i<length;i++){
		if(s[i]<='9'&&s[i]>='0'&&i<length-1){
			for(int j=0;j<length-i;j++){
				s[i+j] = s[i+j+1];
			}
		}
		if(s[i]<'9'&&s[i]>'0'&&i==length-1){
			s[i] = '\0';
		}
	}
}

int main(void){
	char s[] = "jul3iu2mi1ng0";
	del_digit(s);
	printf("%s\n",s );
}