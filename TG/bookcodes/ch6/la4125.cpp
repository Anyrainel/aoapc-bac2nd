// LA4125/UVa1075 Painter
// Rujia Liu
#include <cstdio>
#include <cstdlib>
#include <map>
#include<algorithm>
using namespace std;

typedef long long LL;

struct Point {
  int x, y;
  Point(int x = 0, int y = 0):x(x),y(y){}
  void read() { scanf("%d%d", &x, &y); }
  bool operator < (const Point& p) const {
    return x < p.x || x == p.x && y < p.y;
  }
  Point operator - (const Point& rhs) const {
    return Point(x - rhs.x, y - rhs.y);
  }
};

int icmp(LL x) {
  if(x == 0) return 0;
  return x > 0 ? 1 : -1;
}

inline LL Cross(Point p, Point p1, Point p2) {
  return (LL)(p1.x - p.x) * (LL)(p2.y - p.y) - (LL)(p1.y - p.y)*(LL)(p2.x - p.x);
}

// 