#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
void print(int n)
{
    if (n == 0)
    {
        return;
    }

    print(n - 1);
    cout << n << endl;
}
void solve()
{
    int n;
    cin >> n;
    print(n);
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();

    return 0;
}