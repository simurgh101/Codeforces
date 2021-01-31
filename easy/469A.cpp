#include <bits/stdc++.h>

using namespace std;

#define MEM(a, b) memset(a, (b), sizeof(a))
#define FOR(i, n) for (int i = 0; i < n; i++)
#define RFOR(i, n) (int i = 0; i >= n; i--)
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define EACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define IN(A, B, C) assert(B <= A && A <= C)
#define MP make_pair
#define PB push_back
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define read(type) readInt<type>()
#define print(t) cout << t << endl
#define LL long long
#define vt vector

const int amax = 100;

int main()
{
    int n;
    cin >> n;
    set<int> levels;
    int q, y;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        levels.insert(x);
    }
    cin >> y;
    for (int i = 0; i < y; i++)
    {
        int w;
        cin >> w;
        levels.insert(w);
    }
    if (levels.size() == n)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";
    return 0;
}
