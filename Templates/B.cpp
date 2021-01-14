#include <bits/stdc++.h>
#include <utility>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <array>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>



using namespace std;

#define _USE_MATH_DEFINES
#define abs(a) (((a) > 0) ? (a) : (-(a)))
# define M_PI  3.14159265358979323846  /* pi */
#define LL long long int
#define pb push_back
#define gc getchar_unlocked
#define iosbase ios_base::sync_with_stdio(false)
#define vi vector<LL>
#define vt vector
vector <vector<int> a> ar {
  vector<int>c= a;
  int n = a.size();
  for (int i=0;i<n;i++) {
    if(a[i]==0) {
      a[i]=c[i+1];
      a[i+1]=c[i];
    }
  }
  return a;
};

void solve() {
  vector<int> a;
  int n;
  cin >>n;
  for (int i=0;i<n;i++) {
    cin >> a[i];
  }
  sort(a.begin(),a.end());
  vector<int> ans = f(a);
  for (auto i;ans)
    cout << i;
}
int main() {
  solve();
}
