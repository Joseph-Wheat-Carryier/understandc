#include<stdio.h>
int main(void){
	int no;
	printf("输入一个数:");
	scanf("%d",&no);
	switch(no){
		case 1:
		printf("上课\n");
		break;

		case 2:
		printf("上课\n");
		break;

		case 3:
		printf("上课\n");
		break;

		case 4:
		printf("上课\n");
		break;

		case 5:
		printf("上课\n");
		break;

		case 6:
		printf("休息\n");
		break;

		case 7:
		printf("休息\n");

		default:
		printf("请输入1-7的数\n");
		break;
	}
}