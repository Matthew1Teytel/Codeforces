#include <iostream>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define vpi vector<pii>
#define fi first
#define se second
#define debug(x) cout << #x << " = " << (x) << '\n';
#define sz(x) ((int)(x).size())

using namespace std;
int lastdiv(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return n / i;
        }
    }
    return n;
}
void solve()
{
    int n;
    cin >> n;
    int x;
    vector<int> keys(n + 1);
    vector<int> arr(n + 1);
    for (int i = 1; i < n + 1; i++)
    {

        x = lastdiv(i);
        arr[i] = arr[x];
        arr[x] = i;
    }
    for (int i = 1; i < n + 1; i++)
    {

        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
