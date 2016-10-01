/*
  习题1-7 打折（discount）
  刘汝佳
*/

#include<stdio.h>
int main() {
  int n;
  scanf("%d", &n);
  double money = n * 95;
  if(money >= 300) money *= 0.85;
  printf("%.2lf\n", money);
  return 0;
}
