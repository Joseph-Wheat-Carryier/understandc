#include<stdio.h>

enum year {LEAPYEAR, NONLEAP};




enum year judgeYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return LEAPYEAR;
    } else {
        return NONLEAP;
    }
}







int getDays(int year, int month, int date) {
    if (month < 8) {
        switch (judgeYear(year)) {
        case LEAPYEAR:
            if (month < 2 || (month == 2 && date <= 29)) {
                return 31 * (month - 1) + date;
                break;
            } else {
                return 31 * ((month - 1) / 2) + 30*(month/2)+date - 1;
            }

        case NONLEAP:
            if (month < 2 || (month == 2 && date <= 29)) {
                return 31 * (month - 1) + date;
                break;
            } else {
                return 31 * ((month - 1) / 2) + 30*(month % 2) + date - 2;
            }
        }

    } else {
        switch (judgeYear(year)) {
        case LEAPYEAR:
            return 31 * 4 + 30 * 3 - 1 + ((month - 8) / 2 + (month) % 2) * 31 + (month - 7) / 2 * 30+date;
            break;

        case NONLEAP:
            return 31 * 4 + 30 * 3 - 2 + ((month - 8) / 2 + (month) % 2) * 31 + (month - 7) / 2 * 30+date;
            break;
        }
    }
}

int main(void) {
    int year, month, date;
    puts("输入年月日");
    printf("年:");
    scanf("%d", &year);
    printf("月:");
    scanf("%d", &month);
    printf("日:");
    scanf("%d", &date);

    printf("第%d天\n", getDays(year, month, date));
}