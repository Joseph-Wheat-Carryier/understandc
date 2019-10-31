#include<stdio.h>
int min_of(const int v[], int n) {
    int temp = v[0];

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (v[j] < temp) {
                temp = v[i];
            }else{
            	break;
            }
        }
    }

    return temp;
}

int main(void){
	int arr[4];
	printf("输入4个数组元素:\n");
	for(int i=0;i<4;i++){
		printf("arr[%d]:\n",i );
		scanf("%d",&arr[i]);
	}

	printf("数组中最小的数是:%d\n",min_of(arr,4) );
}