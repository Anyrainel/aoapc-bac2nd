/*
  习题2-4. 倒三角形（triangle）
  刘汝佳
*/

#include<stdio.h>
int main() {
  int i, j, count, n;
  scanf("%d", &n);
  count = n*2-1;
  for(i = 0; i < n; i++) {
    for(j = 0; j < i; j++) printf(" ");
    for(j = 0; j < count; j++) printf("#");
    printf("\n");
    count -= 2;
  }
  return 0;
}
