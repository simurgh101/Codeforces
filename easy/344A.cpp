#include <bits/stdc++.h>

using namespace std;

#define MEM(a, b) memset(a, (b), sizeof(a))
#define FOR(i, k) for (int i = 0; i < k; i++)
#define RFOR(i, k) (int i = 0; i >= k; i--)
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
#define print(t) cout << t
#define LL long long

const LL int amax = 100000;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, sum(0), sub, m[amax] = {0};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> sub;
        if (sub != m[i])
        {
            sum++;
        }
        m[i + 1] = sub;
    }
    cout << sum;
    return 0;
}
