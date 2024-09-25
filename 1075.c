#include<stdio.h>
int main(){
    long long n;
    int f;
    scanf("%lld\n%d", &n, &f); //1000 3
    //for문으로 n/100*100에 1씩 더하고 f로 나누어 지는지 확인한다.
    for(int i=n/100*100; i<n/100*100+100; i++){
        //나누어 지면 i%100 출력 후 브레이크
        if(!(i%f)){
            printf("%02d", i%100);
            break;
        }
    }
    return 0;
}