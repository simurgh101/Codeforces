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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k, l, m, n;
    LL int d, sum(0);
    cin >> k >> l >> m >> n >> d;
    if (k == 1 || l == 1 || m == 1 || n == 1)
        sum = d;
    else
    {
        for (int i = 1; i <= d; i++)
            if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
                sum++;
    }

    cout << sum << endl;
}
