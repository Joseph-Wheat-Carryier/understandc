#include<stdio.h>

int gcd(int x,int y){
	if(x>y){
		if(x%y==0){
			return y;
		}else{
		int z=x%y;
		return gcd(y,z);
	    }
	}else if(x<y){
		if(y%x==0){
			return x;
		}else{
		int z=y%x;
		return gcd(x,z);}
	}else{
		return x;
	}
}

int main(void){
	printf("%d\n",gcd(16,12));
}