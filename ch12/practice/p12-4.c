#include<stdio.h>
#include<string.h>

#define NUMBER 5
#define NAME_LEN 64

typedef struct $ {
    char name[NAME_LEN];
    int height;
    float weight;
    long schols;

} Student;

void swap_Student(Student *x, Student *y) {
    Student temp = *x;
    *x = *y;
    *y = temp;
}

void sort_by_height(Student a[], int n) {
    int i, j;

    for (i = 1; i <= n - 1; i++) {
        for (j = n - 1; j >= i; j--) {
            if (a[j].height < a[j-1].height) {
                swap_Student(&a[j - 1], &a[j]);
            }
        }
    }
}

int main(void) {
    int i;
    Student std[NUMBER];

    for (i = 0; i < NUMBER; i++) {
        char temp[NAME_LEN]={0};
        printf("第%d名学生:\n", i + 1);
        printf("姓名:\n");
        scanf("%s", std[i].name);
        strcpy(std[i].name,temp);

        printf("身高:\n");
        scanf(" %d", &std[i].height);
        
        printf("体重:\n");
        scanf(" %f", &std[i].weight);
        
        printf("奖学金:\n");
        scanf(" %ld", &std[i].schols);
    }

    for(i=0;i<NUMBER;i++){
    	printf("%-8s %6d%6.1f%7ld\n",std[i].name,std[i].height,std[i].weight,std[i].schols );
    }

    sort_by_height(std,NUMBER);

    puts("\n按升高排序。");

    for(i=0;i<NUMBER;i++){
    	printf("%-8s %6d%6.1f%7ld\n",std[i].name,std[i].height,std[i].weight,std[i].schols );
    }

    return 0;
}









