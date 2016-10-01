// UVa12003 Array Transformer
// Rujia Liu
#include<cstdio>
#include<algorithm>
using namespace std;

const int maxn = 300000 + 10;
const int SIZE = 4096;

int n, m, u, A[maxn], block[maxn/SIZE+1][SIZE];

void init() {
  scanf("%d%d%d", &n, &m, &u);
  int b = 0, j = 0;
  for(int i = 0; i < n; i++) {
    scanf("%d", &A[i]);
    block[b][j] = A[i];
    if(++j == SIZE) { b++; j = 0; }
  }
  for(int i = 0; i < b; i++) sort(block[i], block[i]+SIZE);
  if(j) sort(block[b], block[b]+j);
}

int query(int L, int R, int v) {
  int lb = L/SIZE, rb = R/SIZE; // L