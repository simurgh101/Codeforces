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
#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0)

const int amax = 100;

int main()
{
    fast();
    int t, n, a[110];
    cin >> t;
    while (t--)
    {

        cin >> n;
        n *= 2;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int pos[110] = {};

        vector<int> v;
        for (int i = n - 1; i >= 0; i--)
        {
            if (pos[a[i]] == 0)
            {
                pos[a[i]] = 1;
                v.push_back(a[i]);
            }
        }

        int s = v.size();
        for (int i = s - 1; i >= 0; i--)
            cout << v[i] << " ";
        cout << endl;
    }
}
