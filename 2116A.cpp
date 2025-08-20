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
        int b;
    int c;
    int d;

    cin >> a;
        cin >> b;
    cin >> c;
    cin >> d;
    if(min({a,b,c,d})==b||min({a,b,c,d})==d){
        cout<<"Gellyfish\n";
        return;
    }
    cout<<"Flower\n";


   
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
