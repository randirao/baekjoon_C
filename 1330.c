#include<stdio.h>
int main(){
    int A, B;
    scanf("%d %d", &A, &B);
    printf(A>B ? ">" : A<B ? "<" : "==");
    return 0;
}