#include <bits/stdc++.h>
using namespace std;

#define SCD(t) scanf("%d", &t)
#define SCLD(t) scanf("%ld", &t)
#define SCLLD(t) scanf("%lld", &t)
#define SCC(t) scanf("%c", &t)
#define SCS(t) scanf("%s", t)
#define SCF(t) scanf("%f", &t)
#define SCLF(t) scanf("%lf", &t)
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
#define print(t) cout << t;

int main()
{
    int n, i, a[10] = {4, 7, 47, 74, 447, 474, 477, 774, 747, 744}, cnt = 0;
    scanf("%d", &n);
    for (i = 0; i < 10; i++)
    {
        if (n == a[i] || n % a[i] == 0)
        {
            printf("YES\n");
            break;
        }

        else
            cnt++;
    }
    if (cnt == 10)
        printf("NO\n");
    return 0;
}
