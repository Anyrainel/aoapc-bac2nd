/*
  习题1-9 三角形（triangle）
  刘汝佳
*/

#include<stdio.h>
int main() {
  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);
  if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) printf("yes\n");
  else if(a + b <= c || a + c <= b || b + c <= a) printf("not a triangle\n");
  else printf("no\n");
  return 0;
}
