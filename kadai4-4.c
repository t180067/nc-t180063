#include<stdio.h>

int main(){
    double a=1,sum=0;
    int i,N;
    printf("正の整数を入力:");
    scanf("%d",&N);

    for(i=0; i<=N; i++){
        sum+=a;
        printf("S%d=%f\n",i,sum);
        a=a/2.0;

    }
}
