<<<<<<< HEAD
#include<stdio.h>

int combination(int n,int r){
	if(r==1){
		return n;
	}if(r==0){
		return 1;
	}else if(n==r){
		return 1;
	}else{
	return(combination(n-1,r-1)+combination(n-1,r));
	}
}

int main(void){
	int no = combination(6,3);
	printf("%d\n",no );
=======
int combination(int n,int r){
	
>>>>>>> 8b6337b95ad694927ed49fb45647df05086e4c1a
}