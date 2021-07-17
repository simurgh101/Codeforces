#include <bits/stdc++.h>

using namespace std;

#define MEM(a, b) memset(a, (b), sizeof(a))
#define FOR(i, k) for (int i = 0; i < k; i++)
#define RFOR(i, k) for (int i = k - 1; i >= 0; i--)
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
    //TODO - have to done this shit mate
    ios_base::sync_with_stdio(false);
    int t, n;
    int aa[100000];
    cin >> t;
    while (t--)
    {
        int d = 0, rem = 0;
        cin >> n;
        if (n >= 1000)
        {
            rem = n % 1000;
            aa[d++] = n - rem;
            n %= 1000;
        }
        if (n >= 100)
        {
            rem = n % 100;
            aa[d++] = n - rem;
            n %= 100;
        }
        if (n >= 10)
        {
            rem = n % 10;
            aa[d++] = n - rem;
            n %= 10;
        }
        if (n < 10 && n > 0)
        {
            aa[d++] = n;
        }
        vector<int> va;
        for (int i = 0; i < d; i++)
        {
            va.push_back(aa[i]);
        }
        cout << va.size() << endl;
        for (int i = 0; i < va.size(); i++)
        {
            cout << va[i] << " ";
        }
        cout << endl;
    }
}
