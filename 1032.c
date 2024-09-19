#include<stdio.h>
int main(){
    int n;
    char rfile[50], file[50];
    scanf("%d", &n);
    scanf("%s", rfile);
    for(int i=0; i<n-1; i++){
        scanf("%s", file);
        for(int j=0; j<sizeof(rfile); j++){
            if(rfile[j] == file[j]) continue;
            else rfile[j] = '?';
        }
    }
    printf("%s", rfile);
    return 0;
}