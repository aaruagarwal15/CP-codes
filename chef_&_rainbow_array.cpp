#include <bits/stdc++.h>

using namespace std;

bool check_rainbow(vector<int> A)
{
    if (A.size() >= 13)
    {
        int first = 0, last = A.size() - 1;

        int count = 1;

        while (count < 7)
        {
            if (A[first] != count || A[last] != count)
                return false;

            int c1 = 0, c2 = 0;

            while (first < A.size() && A[first] == count)
                first++, c1++;
            while (last >= 0 && A[last] == count)
                last--, c2++;

            if (c1 != c2)
                return false;
            count++;
        }

        if (first <= last && count == 7)
        {
            for (int i = first; i <= last; i++)
                if (A[i] != count)
                    return false;
        }
        else
        {
            return false;
        }

        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    int test;
    cin >> test;
    while (test--)
    {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; i++)
            cin >> A[i];
        bool flag = false;

        flag = check_rainbow(A);
        if (flag)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}