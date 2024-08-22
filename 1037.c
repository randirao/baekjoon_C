#include<stdio.h>
int main(){
    int n, a, min = 1000001, max = 0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &a);
        if(a >= max) max = a;
        if(a <= min) min = a;
    }
    printf("%d", min * max);
    return 0;
}