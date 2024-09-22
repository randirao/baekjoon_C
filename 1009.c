#include<stdio.h>
long long f(int a, int b){
    int sum = 1;
    for(int i=0; i<(b-1)%4+1; i++) sum *= a;
    return (sum-1)%10+1;
}
int main(){
    int t, a, b;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        scanf("%d %d", &a, &b);
        printf("%lld\n", f(a, b));
    }
    return 0;
}