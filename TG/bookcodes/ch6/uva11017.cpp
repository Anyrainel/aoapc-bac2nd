// UVa11017 A Greener World
// Rujia Liu
#include<cstdio>
#include<cmath>
#include<vector>
using namespace std;

typedef long long LL;

const double PI = acos(-1.0);

struct Point {
  int x, y;
  Point(int x=0, int y=0):x(x),y(y) { }
};

typedef Point Vector;

Vector operator + (const Vector& A, const Vector& B) { return Vector(A.x+B.x, A.y+B.y); }
Vector operator - (const Point& A, const Point& B) { return Vector(A.x-B.x, A.y-B.y); }
double Cross(const Vector& A, const Vector& B) { return (LL)A.x*B.y - (LL)A.y*B.x; }

LL PolygonArea2(const vector<Point>& p) {
  int n = p.size();
  LL area2 = 0;
  for(int i = 1; i < n-1; i++)
    area2 += Cross(p[i]-p[0], p[i+1]-p[0]);
  return abs(area2);
}

inline int gcd(int a, int b) {
  return b == 0 ? a : gcd(b, a%b);
}

// 绾挎