#include<stdio.h>
#include<string.h>

#define NAME_LEN   64

typedef struct  student{
	char name[NAME_LEN];
	int height;
	float weight;
	long schols;
}Student;

void hiroko(Student *std){
	if(std->height <180) std->height = 180;
	if(std->weight>80)  std->weight = 80;
}

int main(void){
	Student sanaka;
	hiroko(&sanaka);
	printf("输入姓名:");
	scanf("%s",sanaka.name);
	printf("输入身高");
	scanf("%d",&sanaka.height);
	printf("输入体重");
	scanf("%f",&sanaka.weight);
	printf("输入奖学金");
	scanf("%ld",&sanaka.schols);

	hiroko(&sanaka);


	printf("%s\n",sanaka.name );
	printf("%d\n",sanaka.height);
	printf("%f\n",sanaka.weight );
	printf("%ld\n",sanaka.schols);
}