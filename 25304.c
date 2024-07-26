#include<stdio.h>
int main(){
    int X, N, a, b, sum=0;
    scanf("%d %d", &X, &N);
    for(int i=0; i<N; i++){
        scanf("%d %d", &a, &b);
        sum+=a*b;
    }
    printf(sum==X ? "Yes" : "No");
    return 0;
}