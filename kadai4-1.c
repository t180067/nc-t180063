#include<stdio.h>

int main(){
    int i,a0=0,N;
    printf("正の整数を入力");
    scanf("%d",&N);

    for(i=0; i<N; i++){
        a0=a0+2;
        printf("%d\n",a0);

    }
}
