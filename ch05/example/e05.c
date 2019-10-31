#include<stdio.h>
int main(void){
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int a=0;
	for(int i=0;i<3;i++){
		a=a+arr[i][i];
	}
	printf("左对角线的和为:%d\n", a);
	a=0;

	for(int i=0;i<3;i++){
		a=a+arr[i][2-i];
	}
	printf("右对角线的和为%d\n",a );
	a=0;

	for(int i=0;i<3;i++){
		a=a+arr[0][i];
	}
	printf("第一行的和为%d\n",a );
	a=0;

	for(int i=0;i<3;i++){
		a=a+arr[1][i];
	}
	printf("第二行的和为%d\n",a );
	a=0;

	for(int i=0;i<3;i++){
		a=a+arr[2][i];
	}
	printf("第三行的和为%d\n",a );
	a=0;

	for(int i=0;i<3;i++){
		a=a+arr[i][0];
	}
	printf("第一列的和为%d\n",a );
	a=0;

	for(int i=0;i<3;i++){
		a=a+arr[i][1];
	}
	printf("第二列的和为%d\n",a );
	a=0;

	for(int i=0;i<3;i++){
		a=a+arr[i][2];
	}
	printf("第三列的和为%d\n",a );
}

