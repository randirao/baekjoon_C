#include <stdio.h>
int main() {
  int a, b, c=0;
  scanf("%d %d", &a, &b); //472 385
  c=b;
  for(int i=0;i<3;i++){
    printf("%d\n",a*(b%10));
    b/=10;
  }
  printf("%d\n", a*c);
  return 0;
}