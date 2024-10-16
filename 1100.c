#include<stdio.h>
int main(){
    int cnt = 0;
    int arr[9][9] = {0};
    for(int i=1; i<9; i++){
        for(int j=1; j<9; j++){
            scanf(" %c", &arr[i][j]);
        }
    }
    for(int i=1; i<9; i++){
        for(int j=1; j<9; j++){
            if(i+j%2==0 && arr[i][j] == 'F'){
                cnt++;
            }
        }
    }
    printf("%d", cnt);
    return 0;
}