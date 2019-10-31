#include<stdio.h>
int changeMonth(int date, int month) {
    if (date == 1 && month != 1) {
        return month-1;
    } else if (month == 1 && date == 1) {
        return 12;
    } else {
        return month;
    }
}

int changeYear(int year, int month, int date) {
    if (month == 1 && date == 1) {
        return year - 1;
    } else {
        return year;
    }
}

int judgeYear(int year) {
    if ((year % 4 == 0 & year % 100 != 0) || year % 400 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int judgeMonth(int month) {
    int big[8] = {0, 1, 3, 5, 7, 8, 10, 12};
    int small[4] = {4, 6, 9, 11};

    for (int i = 0; i < 8; i++) {
        if (month == big[i]) {
            return 1;
        }
    }

    for (int i = 0; i < 4; i++) {
        if (month == small[i]) {
            return 2;
        }
    }

    if (month == 2) {
        return 0;
    }

    return 100;
}

int judgeDate(int year, int month) {
    switch (judgeYear(year)) {
    case 1:

        switch (judgeMonth(month)) {
        case 1:
            return 31;

        case 2:
            return 30;

        case 0:
            return 29;
        }


    case 0:

        switch (judgeMonth(month)) {
        case 1:
            return 31;
            break;

        case 2:
            return 30;

        case 0:
            return 28;
        }
    }

    return 100;
}

void decrement_date(int *year, int *month, int *date) {


    if (*date == 1) {
        switch (judgeDate(*year, *month - 1)) {
        case 31:
            *year = changeYear(*year, *month, *date);

            *month = changeMonth(*date, *month);
            *date = 31;

            break;

        case 30:
            *year = changeYear(*year, *month, *date);

            *month = changeMonth(*date, *month);
            *date = 30;
            break;

        case 29:
            *year = changeYear(*year, *month, *date);

            *month = changeMonth(*date, *month);
            *date = 29;
            break;

        case 28:
            *year = changeYear(*year, *month, *date);

            *month = changeMonth(*date, *month);
            *date = 28;
            break;

        case 100:
            *year = changeYear(*year, *month, *date);

            *month = changeMonth(*date, *month);


        }
    } else {
        *year = changeYear(*year, *month, *date);

        *month = changeMonth(*date, *month);

        *date = *date - 1;
    }



}

int main(void) {
    int year, month, date;
    puts("请输入年月日:");
    printf("年:");
    scanf("%d", &year);

    printf("月:");
    scanf("%d", &month);

    printf("日:");
    scanf("%d", &date);

    decrement_date(&year, &month, &date);

    printf("前一天为:%d年%d月%d日\n", year, month, date);
}












