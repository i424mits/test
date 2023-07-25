#include <stdio.h>

int main(void){
  int n;

  printf("n = ");
  scanf("%d", &n);

  if ( ( n & 1 ) == 0 ){ /*()をつけることにより、n & 1 を先に計算することができるようになるため*/
    printf("%d は偶数です\n", n);
  }
  return 0;
}
