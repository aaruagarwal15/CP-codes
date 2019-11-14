#include <bits/stdc++.h>
#include <vector>
#include <set>

#define ll long long
#define ld long double
#define endl '\n'
#define P pair<ll, ll>
using namespace std;
ld dist(P x, P y)
{
    ld a = (x.first - y.first) * (x.first - y.first);
    ld b = (x.second - y.second) * (x.second - y.second);
    return sqrtl(a + b);
}
ld minld(ld a, ld b)
{
    if (a < b)
        return a;
    return b;
}
int main()
{
    cout << std::fixed << std::setprecision(12) << endl;
    ll t;
    cin >> t;
    while (t--)
    {
        P x;
        cin >> x.first >> x.second;
        ll n, m, k;
        cin >> n >> m >> k;
        P nar[n], mar[m], kar[k];
        for (ll i = 0; i < n; i++)
            cin >> nar[i].first >> nar[i].second;
        for (ll i = 0; i < m; i++)
            cin >> mar[i].first >> mar[i].second;
        for (ll i = 0; i < k; i++)
            cin >> kar[i].first >> kar[i].second;
        ld min_d = INT_MAX * 40.0;
        ld dis11[n], dis12[m], dis21[n], dis22[m];
        for (ll i = 0; i < n; i++)
        {
            ld dm = dist(x, nar[i]);
            dis11[i] = dm;
        }
        for (ll i = 0; i < m; i++)
        {
            ld dm = dist(x, mar[i]);
            dis12[i] = dm;
        }
        for (ll i = 0; i < n; i++)
        {
            ld sml = INT_MAX * 40.0;
            for (ll j = 0; j < k; j++)
            {
                ld dm = dist(kar[j], nar[i]);
                if (dm < (ld)sml)
                    sml = dm;
            }
            dis21[i] = sml;
        }
        for (ll i = 0; i < m; i++)
        {
            ld sml = INT_MAX * 40.0;
            for (ll j = 0; j < k; j++)
            {
                ld dm = dist(kar[j], mar[i]);
                if (dm < (ld)sml)
                    sml = dm;
            }
            dis22[i] = sml;
        }
        ld res = INT_MAX * 40.0;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                ld dm = dist(nar[i], mar[j]);
                ld opt1 = dis11[i] + dm + dis22[j];
                ld opt2 = dis12[j] + dm + dis21[i];
                ld mindm = minld(opt1, opt2);
                if (res > mindm)
                    res = mindm;
            }
        }
        cout << res << endl;
    }
    return 0;
}