#include<stdio.h>
int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    printf(x>0 && y>0 ? "1" : x<0 && y>0 ? "2" : x<0 && y<0 ? "3" :"4");
    return 0;
}