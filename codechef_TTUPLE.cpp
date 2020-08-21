#include <bits/stdc++.h>
#include <vector>

#define endl '\n'
#define ll long long
#define ld long double
#define pb push_back
#define vll vector<ll>
#define vvl vector<vll>
#define vi vector<i>
#define P pair<ll, ll>
#define rep(idx, n) for (ll i = idx; i < n; i++)
#define mod 1000000007
#define ff first
#define ss second

using namespace std;
template <class T>
void DEBUG(vector<T> v_print)
{
    ll v_size = v_print.size();
    cout << "--DEBUG-- ";
    rep(0, v_size)
    {
        cout << v_print[i] << " ";
    }
    cout << endl;
}
ll getCount(vector<ll> a)
{
    ll same_count = 0;
    if (a[0] == a[3])
        same_count++;
    if (a[1] == a[4])
        same_count++;
    if (a[2] == a[5])
        same_count++;
    return same_count;
}

//===============================CASE 1 Handler=================================================

int case1Handler(ll a, ll b, ll c, ll p, ll q, ll r)
{
    if (a == p)
    {
        if ((q - b) == (r - c) || (b - q) == (c - r))
        {
            //cout << 1 << endl;
            return 1;
        }
        else if (b != 0 && c != 0 && (ceil(q * 1.0l / b) == floor(q * 1.0l / b)) && (ceil(r * 1.0l / c) == floor(r * 1.0l / c)) && (q / b) == (r / c))
        {
            //cout << 1 << endl;
            return 1;
        }
        else
        {
            //cout << 2 << endl;
            return 2;
        }
    }
    else if (q == b)
    {
        if ((p - a) == (r - c) || (a - p) == (c - r))
        {
            //cout << 1 << endl;
            return 1;
        }
        else if (a != 0 && c != 0 && (ceil(p * 1.0l / a) == floor(p * 1.0l / a)) && (ceil(r * 1.0l / c) == floor(r * 1.0l / c)) && (p / a) == (r / c))
        {
            //cout << 1 << endl;
            return 1;
        }
        else
        {
            //cout << 2 << endl;
            return 2;
        }
    }
    else if (r == c)
    {
        if ((q - b) == (p - a) || (b - q) == (a - p))
        {
            //cout << 1 << endl;
            return 1;
        }
        else if (b != 0 && a != 0 && (ceil(q * 1.0l / b) == floor(q * 1.0l / b)) && (ceil(p * 1.0l / a) == floor(p * 1.0l / a)) && (q * 1.0l / b) == (p * 1.0l / a))
        {
            //cout << 1 << endl;
            return 1;
        }
        else
        {
            //cout << 2 << endl;
            return 2;
        }
    }
    return 2;
}

//==============================CASE 0 Handler=========================================
void case0Handler(ll a, ll b, ll c, ll p, ll q, ll r)
{
    if ((p - a == q - b && q - b == r - c) || (a - p == b - q && b - q == c - r))
    {
        cout << 1 << endl;
        return;
    }
    else if (a != 0 && b != 0 && c != 0 && (ceil(p * 1.0l / a) == floor(p * 1.0l / a) && ceil(q * 1.0l / b) == floor(q * 1.0l / b) && ceil(r * 1.0l / c) == floor(r * 1.0l / c)) && (p * 1.0l / a) == (q * 1.0l / b) && (p / a) == (r * 1.0l / c))
    {
        cout << 1 << endl;
        return;
    }
    else if ((a != 0 && b != 0 && (ceil(p * 1.0l / a) == floor(p * 1.0l / a)) && (ceil(q * 1.0l / b) == floor(q * 1.0l / b)) && (p * 1.0l / a) == (q * 1.0l / b)) ||
             (c != 0 && b != 0 && (ceil(r * 1.0l / c) == floor(r * 1.0l / c)) && (ceil(q * 1.0l / b) == floor(q * 1.0l / b)) && (r * 1.0l / c) == (q * 1.0l / b)) ||
             (a != 0 && c != 0 && (ceil(p * 1.0l / a) == floor(p * 1.0l / a)) && (ceil(r * 1.0l / c) == floor(r * 1.0l / c)) && (p * 1.0l / a) == (r * 1.0l / c)))
    {
        cout << 2 << endl;
        return;
    }
    else if ((a != 0 && ceil(p * 1.0l / a) == floor(p * 1.0l / a) && (q - b == r - c || b - q == c - r)) ||
             (b != 0 && ceil(q * 1.0l / b) == floor(q * 1.0l / b) && (p - a == r - c || a - p == c - r)) ||
             (c != 0 && ceil(r * 1.0l / c) == floor(r * 1.0l / c) && (q - b == p - a || b - q == a - p)))
    {
        cout << 2 << endl;
        return;
    }
    // else if (a != 0 && b != 0 && c != 0 && p * a >= 0 && q * b >= 0 && r * c >= 0 && (p % a) == (q % b) && (p % a) == (r % c))
    // {
    //     cout << 2 << endl;
    //     return;
    // }
    ll x = 1;
    if (a != 0 && b != 0 && c != 0)
    {
        if (a - b != 0)
        {
            x = ((b * p - a * q) * 1.0l) / (1.0l * (a - b));
        }
        else if (b - c != 0)
        {
            x = ((c * q - r * b) * 1.0l) / (1.0l * (b - c));
        }
        else if (a - c != 0)
        {
            x = ((c * p - r * a) * 1.0l) / (1.0l * (a - c));
        }
        //cout << "x: " << x << " " << flg << endl;
        if ((p + x) % a == 0 && (q + x) % b == 0 && (r + x) % c == 0 && ((p + x) / a == (q + x) / b && (q + x) / b == (r + x) / c))
        {
            cout << 2 << endl;
            return;
        }
    }

    //--------------------------3-PART-CASE-1----------------------------------
    ll m = 1;
    ll d = 1;
    //cout << "3-part-case-1\n";
    if (a - b != 0)
    {
        m = ((p - q) * 1.0l) / (ld)(a - b);
        d = p - (a * m);
    }
    else if (a - c != 0)
    {
        m = ((p - r) * 1.0l) / (ld)(a - c);
        d = q - (b * m);
    }
    else if (b - c != 0)
    {
        m = ((q - r) * 1.0l) / (ld)(b - c);
        d = r - (c * m);
    }
    if ((a * m) + d == p && (b * m) + d == q && (c * m) + d == r)
    {
        cout << 2 << endl;
        return;
    }
    //--------------------------3-PART-CASE-2----------------------------------
    m = 1;
    d = 1;
    //cout << "3-part-case-2\n";
    if (p - q != 0)
    {
        d = ((q * a - p * b) * 1.0l) / (p - q);
        if (a + d != 0)
            m = p / (a + d);
    }
    else if (p - r != 0)
    {
        d = ((r * a - p * c) * 1.0l) / (p - r);
        if (a + d != 0)
            m = p / (a + d);
    }
    else if (q - r != 0)
    {
        d = ((r * b - q * c) * 1.0l) / (q - r);
        if (b + d != 0)
            m = q / (b + d);
    }
    if ((a + d) * m == p && (b + d) * m == q && (c + d) * m == r)
    {
        cout << 2 << endl;
        return;
    }
    //-----------------SC1----------------
    //cout << "sc1" << endl;
    int dif = p - a;
    if (b + dif == q || c + dif == r)
    {
        cout << 2 << endl;
        return;
    }
    else
    {
        int res = case1Handler(a + dif, b, c, p, q, r);
        if (res < 2)
        {
            cout << 1 + res << endl;
            return;
        }
        res = case1Handler(a + dif, b + dif, c, p, q, r);
        if (res < 2)
        {
            cout << 1 + res << endl;
            return;
        }
        res = case1Handler(a + dif, b, c + dif, p, q, r);
        if (res < 2)
        {
            cout << 1 + res << endl;
            return;
        }
        res = case1Handler(a + dif, b + dif, c + dif, p, q, r);
        if (res < 2)
        {
            cout << 1 + res << endl;
            return;
        }
    }
    //-----------------SC2----------------
    //cout << "sc2" << endl;
    dif = q - b;
    if (a + dif == p || c + dif == r)
    {
        cout << 2 << endl;
        return;
    }
    else
    {
        int res = case1Handler(a, b + dif, c, p, q, r);
        if (res < 2)
        {
            cout << 1 + res << endl;
            return;
        }
        res = case1Handler(a + dif, b + dif, c, p, q, r);
        if (res < 2)
        {
            cout << 1 + res << endl;
            return;
        }
        res = case1Handler(a, b + dif, c + dif, p, q, r);
        if (res < 2)
        {
            cout << 1 + res << endl;
            return;
        }
        res = case1Handler(a + dif, b + dif, c + dif, p, q, r);
        if (res < 2)
        {
            cout << 1 + res << endl;
            return;
        }
    }
    //-----------------SC3----------------
    //cout << "sc3" << endl;
    dif = r - c;
    if (a + dif == p || b + dif == q)
    {
        cout << 2 << endl;
        return;
    }
    else
    {
        int res = case1Handler(a, b, c + dif, p, q, r);
        if (res < 2)
        {
            cout << 1 + res << endl;
            return;
        }
        res = case1Handler(a, b + dif, c + dif, p, q, r);
        if (res < 2)
        {
            cout << 1 + res << endl;
            return;
        }
        res = case1Handler(a + dif, b, c + dif, p, q, r);
        if (res < 2)
        {
            cout << 1 + res << endl;
            return;
        }
        res = case1Handler(a + dif, b + dif, c + dif, p, q, r);
        if (res < 2)
        {
            cout << 1 + res << endl;
            return;
        }
    }

    //--------------------------SC4------------------------------

    int factor = 1;
    if (a != 0 && p % a == 0)
    {
        factor = p / a;
        if (b * factor == q || c * factor == r)
        {
            cout << 2 << endl;
            return;
        }
        else
        {
            int res = case1Handler(a * factor, b, c, p, q, r);
            if (res < 2)
            {
                cout << 1 + res << endl;
                return;
            }
            res = case1Handler(a * factor, b * factor, c, p, q, r);
            if (res < 2)
            {
                cout << 1 + res << endl;
                return;
            }
            res = case1Handler(a * factor, b, c * factor, p, q, r);
            if (res < 2)
            {
                cout << 1 + res << endl;
                return;
            }
            res = case1Handler(a * factor, b * factor, c * factor, p, q, r);
            if (res < 2)
            {
                cout << 1 + res << endl;
                return;
            }
        }
    }

    //--------------------------SC5------------------------------

    if (b != 0 && q % b == 0)
    {
        factor = q / b;
        if (a * factor == p || c * factor == r)
        {
            cout << 2 << endl;
            return;
        }
        else
        {
            int res = case1Handler(a, b * factor, c, p, q, r);
            if (res < 2)
            {
                cout << 1 + res << endl;
                return;
            }
            res = case1Handler(a * factor, b * factor, c, p, q, r);
            if (res < 2)
            {
                cout << 1 + res << endl;
                return;
            }
            res = case1Handler(a, b * factor, c * factor, p, q, r);
            if (res < 2)
            {
                cout << 1 + res << endl;
                return;
            }
            res = case1Handler(a * factor, b * factor, c * factor, p, q, r);
            if (res < 2)
            {
                cout << 1 + res << endl;
                return;
            }
        }
    }

    //--------------------------SC6------------------------------

    if (c != 0 && r % c == 0)
    {
        factor = r / c;
        if (a * factor == p || b * factor == q)
        {
            cout << 2 << endl;
            return;
        }
        else
        {
            int res = case1Handler(a, b, c * factor, p, q, r);
            if (res < 2)
            {
                cout << 1 + res << endl;
                return;
            }
            res = case1Handler(a * factor, b, c * factor, p, q, r);
            if (res < 2)
            {
                cout << 1 + res << endl;
                return;
            }
            res = case1Handler(a, b * factor, c * factor, p, q, r);
            if (res < 2)
            {
                cout << 1 + res << endl;
                return;
            }
            res = case1Handler(a * factor, b * factor, c * factor, p, q, r);
            if (res < 2)
            {
                cout << 1 + res << endl;
                return;
            }
        }
    }

    cout << 3 << endl;
}

//================================MAIN============================================
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    //cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c, p, q, r;
        cin >> a >> b >> c;
        cin >> p >> q >> r;
        ll same_count = getCount({a, b, c, p, q, r});
        if (same_count == 3)
        {
            cout << 0 << endl;
            //continue;
        }
        else if (same_count == 2)
        {
            cout << 1 << endl;
            //continue;
        }
        else if (same_count == 1)
        {
            ll res = case1Handler(a, b, c, p, q, r);
            cout << res << endl;
            //continue;
        }
        else
        {
            case0Handler(a, b, c, p, q, r);
        }
    }
}