#include <bits/stdc++.h>
using namespace std;

int id[1000001];

int main() {
  int t, n;
  scanf("%d", &t);
  while (t--) {
    map<int, int> sesh_position;
    scanf("%d", &n);
    int a = 0, b = 1;
    for (int i = 1; i <= n; i++) {
      scanf("%d", &id[i]);
      if (sesh_position[id[i]] >= b) {
        b = sesh_position[id[i]] + 1;
      }
      sesh_position[id[i]] = i;
      a = max((i - b + 1),a);
    }
    printf("%d\n", a);
  }
  return 0;
}
