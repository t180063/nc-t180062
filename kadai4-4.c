#include <stdio.h>

int main(){
    double N,i,sum=1;
    double a=1;
    printf("N:");
    scanf("%lf",&N);
    for(i=0;i<=N;i++){
        printf("%lf\n",sum);
        a=a/2;
        sum=sum+a;
    }
}
