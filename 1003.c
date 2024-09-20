#include<stdio.h>

//0과 1출력 횟수
int cnt[2] = {0};
//피보나치 자리가 비었는지 확인
long long memo[41];

int f(int n){

    if(n==0){
        cnt[0]++;
        return 0;
    }

    else if(n==1){
        cnt[1]++;
        return 1;
    }

    //메모에 값이 들어가 있으면 memo[n] 리턴
    if(memo[n] != -1) return memo[n];

    //값이 없으면 재귀적으로 계산
    memo[n] =  f(n-1) + f(n-2);
    return memo[n];
}

int main(){

    int t, n;

    scanf("%d", &t);

    for(int i=0; i<t; i++){
        //입력
        scanf("%d", &n);

        //초기화
        for(int i=0; i<41; i++) memo[i] = -1;
        cnt[0] = 0;
        cnt[1] = 0;

        //함수 호출
        f(n);

        //출력
        printf("%d %d\n", cnt[0], cnt[1]);
    }
    return 0;
}