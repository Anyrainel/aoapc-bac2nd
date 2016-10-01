/*
  习题1-8 绝对值（abs）
  刘汝佳
*/

#include<stdio.h>
int main() {
  double x;
  scanf("%lf", &x);
  if(x < 0) x = -x;
  printf("%.2lf\n", x);
  return 0;
}
