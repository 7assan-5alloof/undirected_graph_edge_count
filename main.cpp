#include <bits/stdc++.h>

using namespace std;

int matrix[101][101];

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
            matrix[i][k] = x;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n; k++)
        {
            if (matrix[i][k]) if (!matrix[k][i] || k == i)
                    {
                        cout << "NO";
                        return 0;
                    }
        }
    }
    cout << "YES";

    return 0;
}
