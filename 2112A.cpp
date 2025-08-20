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

void solve()
{
    int a;
    int x;
    int y;
    cin >> a;
    cin>>x;
    cin>>y;
    if ((x>a&&y>a)||(x<a&&y<a)){
        cout<<"YEs\n";
        return;
    }
    cout<<"No\n";
   
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
