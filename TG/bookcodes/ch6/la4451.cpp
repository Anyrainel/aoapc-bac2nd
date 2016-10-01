// LA4451 House of Cards
// Rujia Liu
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;

const int UP = 0;
const int FLOOR = 1;
const int DOWN = 2;

const int maxn = 20;
int n, deck[maxn*2];

struct State {
  int card[8], type[8]; // 涓ゅ