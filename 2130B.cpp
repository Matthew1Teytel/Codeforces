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
    int s;
    cin>>s;
    int ones=0;
    int twos=0;
    int zeros=0;
    vector<int> arr(n);
    for (int &x : arr){cin >> x;}
    for(int i=0;i<n;i++){
        if (arr[i]==0){
            zeros++;

        }
        if (arr[i]==1){
            ones++;

        }
          if (arr[i]==2){
            twos++;

        }
    }
    int sum=ones+2*twos;
    debug(sum);
    debug(s);
    if (sum>s){
         for (int &x : arr){
            cout<<x<<" ";
         }
         cout<<endl;
         return;
    }
    if (sum+1==s){
        for(int i=0;i<zeros;i++){
            cout<<"0 ";
        }
         for(int i=0;i<twos;i++){
            cout<<"2 ";
        }
           for(int i=0;i<ones;i++){
            cout<<"1 ";
        }
        cout<<endl;
        return;
    }
    cout<<"-1\n";
   
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
