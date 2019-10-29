#include<stdio.h>

int main(void){
	int arr[6][2];
	int kzfyw=0;
	int kzfsx=0;
	int ayw;
	int asx;
	int arf;
	int xszf[6];
	int xszfs=0;
	int xspjf;
	printf("输入分数:");
	for(int i=0;i<6;i++){
		for(int j=0;j<2;j++){
			printf("arr[%d][%d]:",i,j);
			scanf("%d",&arr[i][j]);
		}
	}

	for(int i=0;i<6;i++){
		kzfyw+=arr[i][0];
		kzfsx+=arr[i][1];
	}

	for(int i=0;i<6;i++){

		xszf[i]=arr[i][0]+arr[i][1];
		printf("学生%d总分：%d\n",i,xszf[i]);
		xszfs+=xszf[i];
	}


	ayw=kzfyw/2;
	asx=kzfsx/2;
	xspjf=xszfs/6;

	printf("学生平均分:%d\n语文总分:%d\n语文平均分:%d\n数学总分:%d\n数学平均分:%d\n",xspjf,kzfyw,ayw,kzfsx,asx);
	

}