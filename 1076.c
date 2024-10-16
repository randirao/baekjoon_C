#include<stdio.h>

int main(){
    char *color[10] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};
    char c1[10], c2[10], c3[10];
    int a = -1, b = -1, c = -1;
    int sum[10] = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000};
    scanf("%s\n%s\n%s", c1, c2, c3);
    for(int i=0; i<10; i++){
        if(c1 == color[i]) a = i;
        if(c2 == color[i]) b = i;
        if(c3 == color[i]) c = i;
    }
    printf("%d", ((a * 10) + b) * sum[c]);
    return 0;
}