#include<stdio.h>
#include<math.h>
int swcInt(char v[], int length) {
    int temp = 0;

    for (int i = 0; i < length; i++) {
        temp += (v[i] - '0') * (int)pow(10, length - i - 1);
    }

    return temp;
}


double swcDouble(char v[], int length) {
    int dot;
    double temp = 0.0;

    for (int i = 0; i < length; i++) {
        if (v[i] == '.') {
            dot = i;
        }
    }

    for (int i = 0; i < dot; i++) {
        temp += (double)((v[i] - '0') * pow(10, dot - i - 1));
    }

    for (int i=dot+1; i<length;i++){
    	temp +=(double)((v[i]-'0')*pow(0.1,i-dot));
    }

    return temp;


}

int main(void) {
    char a[4] = {'1', '2', '3', '4'};
    printf("%d\n", swcInt(a, 4));

    char b[5] = {'1','2','.','3','4'};
    printf("%lf\n", swcDouble(b,5));
}