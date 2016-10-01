// UVa11990 "Dynamic" Inversion
// Rujia Liu
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cassert>
using namespace std;

inline int lowbit(int x) { return x&-x; }

struct Node {
  Node *ch[2]; // 宸