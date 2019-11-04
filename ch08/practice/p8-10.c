#include <stdio.h>

int main(void)
{
    int i, ch;
    int cnt[10] = {0};
    
    while ((ch = getchar()) != EOF) {
        if (ch >= '0' && ch <= '9')
            cnt[ch - '0']++;
    }

    int max = cnt[0];


    for(int i=0;i<10;i++){
        if(cnt[i]>max){
            max = cnt[i];
        }
    }

    printf("%d_______\n",max );

    for(int i=max;i>=1;i--){
        for(int j=0;j<=9;j++){
            if(cnt[j]<i){
                printf("%3s"," ");
            }else{
                printf("%3s","*");
            }
        }
        printf("\n");
    }

    for (i = 0; i < 10; i++)
        printf("%3d", i);

    printf("\n");
    return 0;
}