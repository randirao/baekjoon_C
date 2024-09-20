#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    int t, x1, y1, r1, x2, y2, r2;
    double d;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
        d = sqrt((pow(x2-x1, 2)) + (pow(y2-y1, 2)));
        if(x1 == x2 && y1 == y2 && r1 == r2) printf("-1\n");
        else if(abs(r1-r2) < d && r1+r2 > d) printf("2\n");
        else if(abs(r1-r2) == d || r1+r2 == d) printf("1\n");
        else if(abs(r1-r2) > d || r1+r2 < d) printf("0\n");
    }
    return 0;
}