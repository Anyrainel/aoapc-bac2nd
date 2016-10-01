/*
  习题2-7. 近似计算（approximation）
  刘汝佳
*/

#include<stdio.h>
int main() {
  int i;
  double sum = 0;
  for(i = 0; ; i++) {
    double term = 1.0 / (i*2+1);
    if(i % 2 == 0) sum += term;
    else sum -= term;
    if(term < 1e-6) break;
  }
  printf("%.6lf\n", sum);
  return 0;
}
