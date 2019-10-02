#include <bits/stdc++.h>
#include <map>
#include <vector>

#define ll long long int
#define ld long double
#define endl '\n'

using namespace std;

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        ll prod = a * b;
        ld root = sqrt(prod);
        ll count = 0;
        for (int i = 1; i < ceil(root); i++)
        {
            int ls = 0;
            if (prod % i == 0)
                ls = 1;
            int tempB = (prod / i) - ls;
            if (((a == b) && (tempB == a || i== a)) &&(tempB == a && i == b) || (tempB == b && i == a) || ((tempB == i) && (i == a || i == b)))
            {
                continue;
            }
            else if (tempB == i || i == a || i == b || tempB == a || tempB == b)
                count++;
            else
            {
                count += 2;
            }
        }
        cout << count << endl;
    }
    return 0;
}