// UVa11270 Tiling Dominoes
// Rujia Liu
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int n, m, cur;

const int maxn = 15;
long long d[2][1<<maxn], memo[maxn*maxn][maxn*maxn];

void up(int a, int b) {
  if(b&(1<<m)) d[cur][b^(1<<m)] += d[1-cur][a];
}

long long solve(int n, int m) {
  memset(d, 0, sizeof(d));
  cur = 0;
  d[0][(1<<m)-1] = 1;
  for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++) { // 