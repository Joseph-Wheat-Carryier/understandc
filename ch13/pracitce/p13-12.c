#include<stdio.h>
#include<time.h>
#include<stdlib.h>


char data_file[] = "datetime.dat";

/*取得并显示上一次运行时的日期和时间*/
void get_data(void)
{
    FILE *fp;
    struct tm *timer = (struct tm *)malloc(sizeof(struct tm));
    if ((fp = fopen(data_file, "rb")) == NULL)
        printf("本程序第一次运行\n");
    else {

        fread(timer, sizeof(struct tm),1,fp);
        printf("上一次运行是在%d年%d月%d日%d时%d分%d秒\n", 
            timer->tm_year, timer->tm_mon, timer->tm_mday, timer->tm_hour,timer->tm_min, timer->tm_sec);

        fclose(fp);
    }
}

/*写入本次运行时的日期和时间*/
void put_data(void)
{
    FILE *fp;
    time_t current = time(NULL);
    struct tm *timer = localtime(&current);

    timer->tm_year+=1900;
    timer->tm_mon=1;
    

    if ((fp = fopen(data_file, "wb")) == NULL)
        printf("文件打开失败\n");
    else {
        fwrite(timer,sizeof(struct tm),1,fp);

        fclose(fp);
    }
}

int main(void)
{
    get_data();
    put_data();
    return 0;
}