#include<stdio.h>
#define  NUMBER  10
int main(void)
{
    int i;
    char s[NUMBER][128];
    int keys=0;
    int index=0;

    for (i = 0; i < NUMBER; i++) {
        printf("s[%d] : ", i);
        scanf("%s", s[i]);
        for(int j=0;j<5;j++){
        	if(s[i][j]!='$'){
        		break;
        	}

        	if(j==4){
        		keys =1;
        	}
        }
        if(keys==1){
        	index = i;
        	break;
        }
    }

    printf("index%d\n",index );

    for (i = 0; i < index; i++)
        printf("s[%d] = \"%s\"\n", i, s[i]);
    
    return 0;
}