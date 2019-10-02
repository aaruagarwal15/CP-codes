#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void multiply(ll F[2][2], ll M[2][2]);

void power(ll F[2][2], ll n);

ll fib(ll n)
{
    ll F[2][2] = {{1, 1}, {1, 0}};
    if (n == 0)
        return 0;
    power(F, n - 1);
    return F[0][0];
}

void power(ll F[2][2], ll n)
{
    if (n == 0 || n == 1)
        return;
    ll M[2][2] = {{1, 1}, {1, 0}};

    power(F, n / 2);
    multiply(F, F);

    if (n % 2 != 0)
        multiply(F, M);
}

void multiply(ll F[2][2], ll M[2][2])
{
    ll x = F[0][0] * M[0][0] + F[0][1] * M[1][0];
    ll y = F[0][0] * M[0][1] + F[0][1] * M[1][1];
    ll z = F[1][0] * M[0][0] + F[1][1] * M[1][0];
    ll w = F[1][0] * M[0][1] + F[1][1] * M[1][1];

    F[0][0] = x % 10;
    F[0][1] = y % 10;
    F[1][0] = z % 10;
    F[1][1] = w % 10;
}

ll getPower(ll n)
{
    return floorl(log2l(n));
}
bool isPowerOfTwo(ll n)
{
    if (n == 0)
        return false;

    return (ceill(log2l(n)) == floorl(log2l(n)));
}
// 0 1 1 2 3 5 8 13 21 34

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        scanf("%lld", &n);
        //cout << ceil(log2(n)) << "===" << floor(log2(n)) << endl;
        n--;
        if (n == 0)
        {
            printf("%d\n", 0);
            continue;
        }
        ll pwr = getPower(n + 1);
        ll res = 1L << pwr;
        //cout << pwr << "===" << res << endl;
        if (pwr == 1)
            printf("%d\n", 1);
        else
            printf("%lld\n", fib(res - 1));
    }
    return 0;
}