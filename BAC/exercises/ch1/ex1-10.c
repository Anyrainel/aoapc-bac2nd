/*
  习题1-10 年份（year）
  刘汝佳
*/

#include<stdio.h>
int main() {
  int year;
  scanf("%d", &year);
  if(year % 4 != 0 || (year % 100 == 0 && year % 400 != 0)) printf("no\n");
  else printf("yes\n");
  return 0;
}
