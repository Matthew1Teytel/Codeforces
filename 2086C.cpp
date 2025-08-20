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
int find_num(int i, vector<int> &arr, vector<int> &stored, int start)
{
    if (arr[i] == i)
    {
         stored[arr[i]]=1;
        return 1;
    }
    else if (stored[arr[i]] > 0)
    {
        return stored[arr[i]]+1;
    }
   // stored[i] = 1 + find_num(arr[i], arr, stored, start + 1);
    return stored[i];
}
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> stored(n, 0);
    vector<int> ds(n);
    for (int &x : arr)
    {
        cin >> x;
        x--;
    }
    for (int &x : ds)
    {
        cin >> x;
        x--;
    }
    // debug(arr[0]);
    // debug(ds[0]);
    vector<int> &x = arr;
     vector<int>& y=stored;
    for (int i = 0; i < n; i++)
    {
        //  debug(arr[i]);
        // debug(ds[i]);
          stored[i]=find_num(i, x,y,1);
    }

    for (int i = 0; i < n; i++)
    {
        cout << stored[ds[i]] << " ";
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
