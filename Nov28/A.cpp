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
    int n;
    cin>>n;
    if (n==1){
         cout<<1<<endl;
         return ;
    }
    if (n==2){
         cout<<9<<endl;
         return ;
    }
    int power=pow(n,2);
    cout<<max(power+power-1+power-n,max(power-1+power-2+power-n-1+power,power-1+power-n+power-n-1+power-n-2+power-2*n-1))<<endl;
   
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
