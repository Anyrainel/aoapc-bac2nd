// LA5059 Playing With Stones: 找规律代码
// Rujia Liu
#include<cstdio>
#include<cstring>
const int maxn = 100;
int SG[maxn];
int vis[maxn];

int main() {
  SG[1] = 0;
  for(int i = 2; i <= 30; i++) {
    memset(vis, 0, sizeof(vis));
    for(int j = 1; j*2 <= i; j++) vis[SG[i-j]] = 1;
    for(int j = 0; ; j++) if(!vis[j]) {
      SG[i] = j;
      break;
    }
    printf("%d ", SG[i]);
  }
  return 0;
}
