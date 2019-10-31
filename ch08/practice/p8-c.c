#include<stdio.h>
#include<math.h>
int swt(int a) {
    int decimal = 0;
    int count = 0;

    for (int i = a; i != 0; i /=10) {
        count++;
    }

    for (int i = 1; i <= count; i++) {
        decimal += (a / (int)pow(10, count - i)) * (int)pow(8, count - i);
        a%=(int)pow(10,count-i);
    }

    return decimal;
}

int main(void){
	int a;
	printf("输入一个八进制数:");
	scanf("%d",&a);
	printf("转化为10进制为%d\n",swt(a) );
}