#include<stdio.h>

int main(){
    double a0=1.0,s=0;
    int i,N;
    printf("正の整数を入力");
    scanf("%d",&N);

    for(i=0; i<=N; i++){
        s+=a0;
        printf("S%d=%f\n",i,s);
         a0*=0.5;

    }
}

