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

const int amax = 100;

int main()
{
    int n;
    cin >> n;
    int mw = 0, cw = 0;
    FOR(i, n)
    {
        int m, c;
        cin >> m >> c;
        if (m > c)
            mw++;
        else if (m < c)
            cw++;
    }
    // cout << cw << mw;
    if (mw > cw)
        cout << "Mishka";
    else if (mw < cw)
        cout << "Chris";
    else
        cout << "Friendship is magic!^^";
}