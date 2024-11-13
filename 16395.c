#include<stdio.h>
int memo[31][31];
int f(int n, int k){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if(i == 1 || j == 1) memo[i][j] = 1;
            else memo[i][j] = memo[i-1][j-1] + memo[i-1][j];
        }
    }
    return memo[n][k];
}

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d", f(n, k));
    return 0;
}