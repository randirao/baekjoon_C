#include<stdio.h>

long long memo[31][31];

long long int f(int n, int m){
    if(n==m) return 1;
    if(n==1) return m;
    if(memo[n][m]) return memo[n][m];
    return memo[n][m] = f(n, m-1) + f(n-1, m-1);
}

int main(){
    int t, n, m;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        scanf("%d %d", &n, &m);
        printf("%lld\n", f(n, m));
    }
    return 0;
}