// UVa11297 Census
// Rujia Liu
#include<algorithm>
using namespace std;

const int INF = 1<<30;
const int maxn = 2000 + 10;
struct IntervalTree2D {
  int Max[maxn][maxn], Min[maxn][maxn], n, m;
  int xo, xleaf, x1, y1, x2, y2, x, y, v, vmax, vmin; // 