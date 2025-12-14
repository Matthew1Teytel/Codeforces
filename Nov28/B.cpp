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
    int a;
    int count=0;
    int sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a!=0){
            count++;
            sum+=a;
        }
    }
    if(sum-count<n-1){
        count-=n-1-sum+count;
    }
    cout<<count<<endl;
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
