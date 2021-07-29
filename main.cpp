#include <bits/stdc++.h>

using namespace std;

int main()
{
//    freopen("a.in", "r", stdin);
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n; k++)
        {
            bool x;
            cin >> x;
            if (x) cnt++;
        }
    }

    cout << cnt / 2;

    return 0;
}
