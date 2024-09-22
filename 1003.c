#include<stdio.h>

long long memo0[41] = {1, 0};
long long memo1[41] = {0, 1};

void f(int n){
    if(n==1||n==0) return;
    if(!memo0[n-1]) f(n-1);
    memo0[n] = memo0[n-1] + memo0[n-2];
    memo1[n] = memo1[n-1] + memo1[n-2];
    return;
}

int main(){
    int t, n;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        scanf("%d", &n);
        f(n);
        printf("%d %d\n", memo0[n], memo1[n]);
    }
    return 0;
}