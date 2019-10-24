#include<stdio.h>
int main(void){
	int n1,n2,n3,n4;
	double d1,d2,d3,d4;
	n1=1;
	n2=2;

	d1=3.14;
	d2=1.414;

	n3=n1*d1;
	n4=n1/n2;

	d1=n1/d1;
	d4=2*d2;

	printf("%d\n%lf\n%d\n%lf\n",n3,n4,d1,d4);
}
