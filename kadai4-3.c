#include <stdio.h>

int main(){
    int N,i;
    int a=1;
    printf("N:");
    scanf("%d",&N);
    printf("%d\n",a);
    for(i=0;i<N;i++){
        a=2*a+1;
    printf("%d\n",a);
    }
}
