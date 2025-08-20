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
    cin >> n;
    int k;
    cin>>k;
    vector<int> arr(n);
    int ones=0;
    char x;
    for (int i=0;i<n;i++){
        cin>>x;
        if(x=='0'){
            ones++;
        }
    }
    if(ones+k>=n){
        cout<< "ALIcE"<<endl;
        return;
    }
    if(k*2>n){
        cout<<"Alice"<<endl;
        return;
    }
    cout<<"BOB"<<endl;
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
