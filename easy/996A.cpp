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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, c(0);
    int bill[5] = {1, 5, 10, 20, 100};
    cin >> n;
    RFOR(i, 5)
    {
        if (n > 0)
        {
            if (n / bill[i] > 0)
            {
                c += n / bill[i];
                n = n % bill[i];
            }
        }
        else
            break;
    }
    print(c);

    return 0;
}
